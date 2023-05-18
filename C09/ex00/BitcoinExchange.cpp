/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:13 by dna               #+#    #+#             */
/*   Updated: 2023/05/18 18:11:51 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <limits.h>

BitcoinExchange::BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::BitcoinExchange( std::string Exchangerate, std::string Financials ) : std::map<std::string, float>() {
	if (checkExchangerate(Exchangerate))
		return ;
	checkFinancials(Financials);
	return ;
}

BitcoinExchange::~BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &obj ) : std::map<std::string, float>(obj) {
	return ;
}

BitcoinExchange &BitcoinExchange::operator=( BitcoinExchange const &obj) {
	(void)obj;
	return (*this);
}

std::map<std::string, float> BitcoinExchange::getFinancials( void ) {
	return (this->_financials);
}

std::map<std::string, float> &BitcoinExchange::getExchangerate( void ) {
	return (this->_exchangerate);
}

void BitcoinExchange::setfinancials( std::string Date, float Value ) {
	this->getExchangerate()[Date] = Value;
	return ;
}

void BitcoinExchange::setExchangerate( std::string Date, float Rate ) {
	this->getExchangerate()[Date] = Rate;
	return ;
}

float BitcoinExchange::checkNumber( std::string Number ) {
	float check;

	if (Number.find_first_not_of("+-0123456789") == std::string::npos && signCheck(Number)) {
		if (Number.find_first_of("-") != std::string::npos)
			throw InvalidNumberException(0);	
		check = strtof(Number.c_str(), NULL);
		if (check > 1000)
			throw InvalidNumberException(1);	
		return(check);
	}
	else if (Number.find_first_not_of("+-.0123456789") == std::string::npos && dotCheck(Number) && signCheck(Number)) {
		check = strtof(Number.c_str(), NULL);
		return(check);
	}
	throw InvalidNumberException(2);
}

float BitcoinExchange::checkdataNumber( std::string Number ) {
	float check;

	if (Number.find_first_not_of("+-0123456789") == std::string::npos && signCheck(Number)) {
		if (Number.find_first_of("-") != std::string::npos)
			throw InvalidNumberException(0);	
		check = strtof(Number.c_str(), NULL);
		return(check);
	}
	else if (Number.find_first_not_of("+-.0123456789") == std::string::npos && dotCheck(Number) && signCheck(Number)) {
		check = strtof(Number.c_str(), NULL);
		return(check);
	}
	throw InvalidNumberException(2);
}

std::string BitcoinExchange::checkDate( std::string Date ) {
	std::istringstream	ss(Date);
	int					Year, Month, Day;
	char				minus;

	if (Date.find_first_not_of("-0123456789") != std::string::npos )
		throw InvalidDateException("Error: bad input => " + Date );
	if (std::count(Date.begin(), Date.end(), '-') != 2)
		throw InvalidDateException("Error: bad input => " + Date );
	if (ss >> Year >> minus && minus == '-' &&
		ss >> Month >> minus && minus == '-' &&
		ss >> Day ) 
	{
		if (Day > 31 || Month > 12 || Month < 1 || Day < 1 || Year < 1)
			throw InvalidDateException("Error: bad input => " + Date);
		else if (Month == 2)
		{
			if (Year % 400 == 0 || (Year % 100 != 0 && Year % 4 == 0)) {
				if (Day > 29)
					throw InvalidDateException("Error: bad input => " + Date);
			}
			else if (Day > 28)
				throw InvalidDateException("Error: bad input => " + Date);
		}
		else if ((Month == 4 || Month == 6 || Month == 9 ||
				 Month == 11) && Day >= 31)
			throw InvalidDateException("Error: bad input => " + Date);
		else
			return (Date);
	}
	else
		throw InvalidDateException("Error: bad input => " + Date);
	return (Date);
}

int BitcoinExchange::checkExchangerate( std::string Exchangerate ) {
	std::fstream	inputFile;
	std::string		line,date,exchangerate;
	float			value;

	inputFile.open( Exchangerate.c_str(), std::fstream::in );
	if (inputFile.is_open())
	{
		getline( inputFile, line );
		if (line != "date,exchange_rate") {
			std::cerr << "Error: Missing column headers in CSV file";
			return (1);
		}
		while(getline( inputFile, line ))
		{
			std::stringstream ss(line);
			getline(ss, date, ',');
			getline(ss, exchangerate, ',');
			try
			{
				checkDate(date);
				value = checkdataNumber(exchangerate);
				setExchangerate(date, value);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				return (1);
			}
		}
		inputFile.close();
	}
	else {
		std::cout << "Data.csv missing!" << std::endl;
		return (1);
	}
	return (0);
}

int BitcoinExchange::checkFinancials( std::string Financials ) {
	std::fstream	inputFile;
	std::string		line,date, number;
	float			value;
	float			rate;

	inputFile.open( Financials.c_str(), std::fstream::in );
	if (inputFile.is_open())
	{
		getline( inputFile, line );
		if (line != "date | value") {
			std::cerr << "Error: Missing column headers in input file";
			return (1);
		}
		while(getline( inputFile, line ))
		{
			std::map<std::string, float>::const_iterator it;
			std::stringstream ss(line);
			getline(ss >> std::ws, date, '|');
			getline(ss >> std::ws, number, '|');
			date.erase(remove_if(date.begin(), date.end(), ::isspace), date.end());
			try
			{
				checkDate(date);
				value = checkNumber(number);
				if (this->getExchangerate().find(date) == this->getExchangerate().end())
					rate = Lower_Bound(date);
				else
					rate = this->getExchangerate()[date];
				std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		inputFile.close();
	}
	else
		std::cout << "Date|value file doesnt exist" << std::endl;
	return (0);
}

float BitcoinExchange::Lower_Bound( std::string date ) {
	std::map<std::string, float>::const_iterator it;
	float rate;

	it = this->getExchangerate().lower_bound(date);
	if (it != this->getExchangerate().end())
	{
		if (it == this->getExchangerate().begin())
			throw InvalidDateException("Error: bad input => " + date);
		--it;
		rate = this->getExchangerate()[it->first];
	}
	else
		rate = this->getExchangerate()[date];
	return (rate);
}

int BitcoinExchange::signCheck( std::string input ) {
	int		i = -1;

	if (input[++i] == '+' || input[i] == '-' ) {
		if (!isdigit(input[++i]))
			return (0);
	}
	else 
	{
		if (!isdigit(input[i]))
			return (0);	
	}
	for (; input[i]; i++) {
		if (input[i] == '+' || input[i] == '-') {
				return (0);
		}
	}
	return (1);
}

int BitcoinExchange::dotCheck( std::string input ) {
	if (input.find('.') == std::string::npos)
		return (0);
	else if (input.find('.') != input.rfind('.'))
		return (0);
	else if (input[0] != '.' && isdigit(input[input.find('.') + 1]))
		return (1);
	return (0);
}

BitcoinExchange::InvalidNumberException::InvalidNumberException( int i) {
	if (i == 0)
		this->_error = "Error: not a positive number.";
	else if (i == 1)
		this->_error = "Error: too large a number.";
	else
		this->_error = "Error: no number specified.";
	return ;	
}

BitcoinExchange::InvalidDateException::InvalidDateException( std::string Error ) : _error(Error) { return ; }
BitcoinExchange::InvalidNumberException::~InvalidNumberException( void ) throw() { return ;	}
BitcoinExchange::InvalidDateException::~InvalidDateException( void ) throw() { return ;	}
const char *BitcoinExchange::InvalidDateException::what() const throw() { return (this->_error.c_str());}
const char *BitcoinExchange::InvalidNumberException::what() const throw() { return (this->_error.c_str());}