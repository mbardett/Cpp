/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:54:28 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/12 22:29:37 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h>
#include <iostream>
#include <iomanip>

//based on the log file and the .hpp file provided for this module, 
//this class needs 1 function for initializing 8 accounts 
//with the same number of initial deposits;
//1 more funcion to display the recap of how many accounts were registered,
//tot sum of money and numbers indicating the transactions;
//two more functions to handle deposits and withdrawals;all the outputs display
//the date and time before anything else, so we need some function/s for 
//date and time too
Account::Account(int first_depo) : _amount(first_depo)
{
		this->_accountIndex = this->_nbAccounts++;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << first_depo << ";";
	std::cout << "created" << std::endl;
}

// Account::Account()
// {
// 	this->_accountIndex = this->_nbAccounts++;
// 	Account::_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex << ";";
// 	std::cout << "amount:0;created\n";
// }

//deconstructors are called int the opposite order the contructors were,
//like"first in/last out", we would have to do some magic tricks in order 
//to achieve the wanted output, like changing the tests file and have the 
//main file hanlde the outputs currently hanlded by the deconstrtuctor, 
//but it might be considere cheating and we don't want that, right?
// check the "I" at the end of the subject if any evaluator 
//wants to ruin your day§
Account::~Account()
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed\n";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//the time.h header includes a tm struct representing time;
//there are several functions for accessing this struct and display date/time,
//and the one which allows to display it specifying the format(like printf
// or scanf) is strftime(char* ptr, size_t maxsize, 
//                              const char* format, const struct tm* timeptr)
void	Account::_displayTimestamp()
{
	time_t currtime = time(NULL);
	tm  *timeinfo = localtime(&currtime);
	char buffer[20];
	strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}

// Account::Account(int first_depo) : _amount(first_depo)
// {
// 		this->_accountIndex = this->_nbAccounts++;
// 	Account::_totalAmount += this->_amount;
// 	this->_nbDeposits = 0;
// 	this->_nbWithdrawals = 0;
// 	Account::_displayTimestamp();
// 	std::cout << "index:" << Account::_accountIndex << ";";
// 	std::cout << "amount:" << first_depo << ";";
// 	std::cout << "created" << std::endl;
// }

//getters
int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
