/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:15 by dna               #+#    #+#             */
/*   Updated: 2023/05/16 13:08:31 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

# include <map>
# include <string>

class BitcoinExchange : public std::map<std::string, float> {

public:

	BitcoinExchange( BitcoinExchange const &obj );
	BitcoinExchange( std::string Exchangerate, std::string Financials);
	~BitcoinExchange( void );
	BitcoinExchange &operator=( BitcoinExchange const &obj );

	std::map<std::string, float>	&getExchangerate( void );
	std::map<std::string, float>	getFinancials( void );
	void							setExchangerate( std::string Date, float Rate );
	void							setfinancials( std::string Date, float Value );	
	int								checkExchangerate( std::string Exchangerate );
	int								checkFinancials( std::string Financials );
	float							checkNumber( std::string Name );
	std::string						checkDate( std::string Date );
	int								signCheck( std::string input );
	int								dotCheck( std::string input );
	float							Lower_Bound( std::string date );
	
	class InvalidNumberException : public std::exception {

	public:

		InvalidNumberException( int i );
		~InvalidNumberException( void ) throw();
		virtual const char* what() const throw();
	
	private:

		std::string _error;
	
	};

	class InvalidDateException : public std::exception {

	public:

		InvalidDateException( std::string Error );
		~InvalidDateException( void ) throw();
		virtual const char* what() const throw();
	
	private:

		std::string _error;
	};

private:

	BitcoinExchange( void );
	std::map<std::string, float> _exchangerate;
	std::map<std::string, float> _financials;
	
};

#endif