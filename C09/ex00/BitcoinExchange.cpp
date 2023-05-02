/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:13 by dna               #+#    #+#             */
/*   Updated: 2023/05/02 17:50:07 by dgross           ###   ########.fr       */
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

BitcoinExchange::BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::BitcoinExchange( std::string Exchangerate, std::string Financials ) {
	std::fstream	inputFile;
	std::string		line,date,exchangerate;
	double			rate;

	inputFile.open( Exchangerate, std::fstream::in );
	if (inputFile.is_open())
	
		while(getline( inputFile, line ))
		{
			std::stringstream ss(line);
			getline(ss, date, ',');
			getline(ss, exchangerate, ',');
			rate = static_cast<double>(strtod(exchangerate.c_str(), NULL));
			
		}
		inputFile.close();
	}
	else
	{
		std::cout << "file doesnt exist" << std::endl;
		return (1);
	}

	return ;
}

BitcoinExchange::BitcoinExchange( std::string Exchangerate, std::string Financials ) : std::map<std::string, double>() {
	
	return ;
}

BitcoinExchange::~BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &obj ) : std::map<std::string, double>(obj) {
	return ;
}

BitcoinExchange &BitcoinExchange::operator=( BitcoinExchange const &obj) {
	return (*this);
}

std::map<std::string, double> BitcoinExchange::getfinancials( void ) {
	return (this->_financials);
}

std::map<std::string, double> BitcoinExchange::getExchangerate( void ) {
	return (this->_exchangerate);
}

void BitcoinExchange::setfinancials( std::map<std::string, double> Financials) {
	this->_financials = Financials;
	return ;
}

void BitcoinExchange::setExchangerate( std::map<std::string, double> Exchangerate) {
	this->_exchangerate = Exchangerate;
	return ;
}

int BitcoinExchange::checkExchangerate( std::string Exchangerate ) {
	(void)Exchangerate;
	return (0);
}

int BitcoinExchange::checkFinancials( std::string Financials ) {
	(void)Financials;
	return (0);
}

void	BitcoinExchange::printExchange( void ) {
	if (1)
		std::cerr << "Error" << std::endl;
	else
		std::cout << "print data" << std::endl;
}
