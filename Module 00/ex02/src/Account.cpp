/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:20:28 by pollo             #+#    #+#             */
/*   Updated: 2023/05/22 12:01:27 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ){
	time_t	curr = time(0);
	tm		*time = localtime(&curr);

	std::cout	<< "[" 
				<< std::setw(4) << time->tm_year + 1900 
				<< std::setw(2) << std::setfill('0') << time->tm_mon << time->tm_mday 
				<< "_" << std::setw(2) << std::setfill('0') 
				<< time->tm_hour << time->tm_min << time->tm_sec 
				<< "] ";
}

Account::Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";created" <<std::endl;
}

Account::~Account(){
	_nbAccounts -= 1;
	_totalAmount  -= _amount;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";closed" <<std::endl;
}

void	Account::makeDeposit( int deposit ){
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";p_amount:" << (_amount - deposit)
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
					<< ";p_amount:" << _amount
					<< ";withdrawal:";
	if (_amount >= withdrawal) {
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout	<< withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawal:" << _nbWithdrawals
					<<std::endl;
		return true;
	}
	std::cout	<< "refused" <<std::endl;
	return false;
}

int		Account::checkAmount( void ) const{
	return _amount;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits 
				<< ";withdrawals:" << _nbWithdrawals 
				<<std::endl;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}
