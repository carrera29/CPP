/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:20:28 by pollo             #+#    #+#             */
/*   Updated: 2023/05/16 13:38:46 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit( int deposit ){
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	if (_amount >= withdrawal){
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		return true;
	}
	else
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
				<< ";withdrawals:" << _nbDeposits 
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

void	Account::_displayTimestamp( void ){
    time_t	curr = time(0);
	tm		*time = localtime(&curr);

	std::cout	<< "[" << time->tm_year << time->tm_mon << time->tm_mday 
				<< "_" << time->tm_hour << time->tm_min << time->tm_sec
				<< "] ";
}

void Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts() 
				<< ";total:" << Account::getTotalAmount()
				<< ";deposits:" << Account::getNbDeposits()
				<< ";withdrawals:" << Account::getNbWithdrawals() 
				<< std::endl;
}

Account::Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account(){
	_nbAccounts -= 1;
	_totalAmount  -=_amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals-= _nbWithdrawals;
}