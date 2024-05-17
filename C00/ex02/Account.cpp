/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:02:33 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 08:28:28 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return ( Account::_nbAccounts );
}

int	Account::getTotalAmount( void ) {
	return ( Account::_totalAmount );
}
int	Account::getNbDeposits( void ) {
	return ( Account::_totalNbDeposits );
}
int	Account::getNbWithdrawals( void ) {
	return ( Account::_totalNbWithdrawals );
}
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";"
			  << "total:" << Account::getTotalAmount() << ";"
			  << "deposits:" << Account::getNbDeposits() << ";"
			  << "withdrawals:" << Account::getNbWithdrawals ()
			  << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ) {
	std::time_t time = std::time(0);
	char timestamp[16];
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", std::localtime(&time));
	std::cout << "[" << timestamp << "] "; 
	return ;
}

Account::Account( int initial_deposit ) {
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0 ;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		      << "amount:" << _amount << ";"
			  << "created" << std::endl;
	return ;
}

Account::Account( void ) {
	return ;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		      << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
	return ;
}
void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << checkAmount() << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << (checkAmount() + deposit) << ";"
			  << "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	return ;
}
bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << checkAmount() << ";"
			  << "withdrawal:";
	if (checkAmount() - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	_nbWithdrawals += 1; 
	std::cout << withdrawal << ";"
			  << "amount:" << (checkAmount() - withdrawal) << ";"
			  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	return (0);
}
int		Account::checkAmount( void ) const {
	return (this->_amount);
}
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << checkAmount() << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals
			  << std::endl;
	return ;
}
