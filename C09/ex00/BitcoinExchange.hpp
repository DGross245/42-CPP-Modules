/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:15 by dna               #+#    #+#             */
/*   Updated: 2023/05/02 17:19:54 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANG_H

# include <map>
# include <string>

class BitcoinExchange : public std::map<std::string, double> {

public:

	BitcoinExchange( BitcoinExchange const &obj );
	BitcoinExchange( std::string Exchangerate, std::string Financials);
	~BitcoinExchange( void );
	BitcoinExchange &operator=( BitcoinExchange const &obj );

	std::map<std::string, double>	getExchangerate( void );
	std::map<std::string, double>	getfinancials( void );
	void							setExchangerate( std::map<std::string, double> Exchangerate );
	void							setfinancials( std::map<std::string, double> Financials);	
	int								checkExchangerate( std::string Exchangerate );
	int								checkFinancials( std::string Financials );
	void							FindExchange( void );
	void							printExchange( void );
	
private:

	BitcoinExchange( void );
	std::map<std::string, double> _exchangerate;
	std::map<std::string, double> _financials;
	
};

#endif