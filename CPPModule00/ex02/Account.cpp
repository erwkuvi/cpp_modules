/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:56:23 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/07 18:23:42 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

#define RESET   "\033[0m"
#define MAGENTA "\033[35m"

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout	<< "index:" << MAGENTA << _accountIndex << RESET
				<< ";amount:" << MAGENTA << _totalAmount << RESET
				<< ";created" << std::endl;

    _nbAccounts++;
}

Account::Account(void)
{
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout	<< "index:" << MAGENTA << _accountIndex << RESET
				<< ";amount:" << MAGENTA << _totalAmount << RESET
				<< ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
    return _totalAmount;
}

int	Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << MAGENTA << _nbAccounts << RESET
			<< "total:" << MAGENTA << _totalAmount << RESET
			<< ";deposits:" << MAGENTA << _totalNbDeposits << RESET
			<< "withdrawals" << MAGENTA << _totalNbWithdrawals << RESET
			<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:" << MAGENTA << _accountIndex << RESET
				<< ";p_amount:" << MAGENTA << _amount << RESET;
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout	<< ";withdrawal:" << MAGENTA << withdrawal << RESET
					<< ";amount:" << MAGENTA << _amount << RESET
					<< ";nb_withdrawals:" << MAGENTA << _nbWithdrawals << RESET << std::endl;
		return true;
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount(void) const
{
	return _amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
		std::cout	<< "index:" << MAGENTA << _accountIndex << RESET
					<< ";amount:" << MAGENTA << _amount << RESET
					<< ";deposits:" << MAGENTA << _nbDeposits << RESET
					<< ";withdrawals:" << MAGENTA << _nbWithdrawals << RESET << std::endl;
}
