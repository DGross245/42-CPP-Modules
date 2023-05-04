/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:13 by dna               #+#    #+#             */
/*   Updated: 2023/05/03 22:58:17 by dna              ###   ########.fr       */
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
#include <regex>
#include <limits.h>

BitcoinExchange::BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::BitcoinExchange( std::string Exchangerate, std::string Financials ) : std::map<std::string, float>() {
	checkExchangerate(Exchangerate);
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

	if (Number.find_first_of("-") != std::string::npos)
		throw InvalidNumberException(0);	
	else if (Number.find_first_not_of("+-0123456789") == std::string::npos && signCheck(Number)) {
		check = strtof(Number.c_str(), NULL);
		if (check > 1000)
			throw InvalidNumberException(1);	
		return(check);
	}
	else if (Number.find_first_not_of("+-.0123456789") == std::string::npos && dotCheck(Number) && signCheck(Number)) {
		check = strtof(Number.c_str(), NULL);
		if (check > 1000)
			throw InvalidNumberException(1);	
		return(check);
	}
	throw InvalidNumberException(2);
}

std::string BitcoinExchange::checkDate( std::string Date ) {
	std::regex dateRegex( "\\d{4}-\\d{2}-\\d{2}" );
	if (std::regex_match(Date, dateRegex))
		return (Date);
	throw InvalidDateException();
}

int BitcoinExchange::checkExchangerate( std::string Exchangerate ) {
	std::fstream	inputFile;
	std::string		line,date,exchangerate;

	inputFile.open( Exchangerate, std::fstream::in );
	if (inputFile.is_open())
	{
		getline( inputFile, line );
		while(getline( inputFile, line ))
		{
			std::stringstream ss(line);
			getline(ss, date, ',');
			getline(ss, exchangerate, ',');
			setExchangerate(checkDate(date), strtof(exchangerate.c_str(), NULL));
		}
		inputFile.close();
	}
	else
		std::cout << "Date,exchangerate doesnt exist" << std::endl;
	return (0);
}

int BitcoinExchange::checkFinancials( std::string Financials ) {
	std::fstream	inputFile;
	std::string		line,date, number;
	float			value;
	float			rate;

	inputFile.open( Financials, std::fstream::in );
	if (inputFile.is_open())
	{
		getline( inputFile, line );
		while(getline( inputFile, line ))
		{
			std::map<std::string, float>::const_iterator it;
			std::stringstream ss(line);
			getline(ss >> std::ws, date, '|');
			getline(ss >> std::ws, number, '|');
			try
			{
				value = checkNumber(number);
				if (this->getExchangerate().find(date) == this->getExchangerate().end()) {
					it = this->getExchangerate().lower_bound(date);
					if (it != this->getExchangerate().end())
						rate = this->getExchangerate()[it->first];
					else
						rate = this->getExchangerate()[date];
				}
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

BitcoinExchange::InvalidNumberException::~InvalidNumberException( void ) throw() { return ;	}
const char *BitcoinExchange::InvalidDateException::what() const throw() { return ("Wrong or missing Date!");}
const char *BitcoinExchange::InvalidNumberException::what() const throw() { return (this->_error.c_str());}