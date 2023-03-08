/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:58:25 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/25 21:50:58 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
     _amount = 0;
     _nbDeposits = 0;
     _nbWithdrawals = 0;
     _accountIndex = Account::getNbAccounts() + 1;
}

Account::Account(int initial_deposit)
{
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _accountIndex = Account::getNbAccounts();
    _amount += initial_deposit;
    _totalAmount += _amount;
    _nbAccounts++;
    std::cout << "[";
    _displayTimestamp();
    std::cout << "]";
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    
   
}


int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}


int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::makeDeposit(int deposit)
{
     int p_amount;
     
     p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    
    _totalNbDeposits++;

    std::cout << "[";
    _displayTimestamp();
    std::cout << "]";
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"; 
    std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    
}

bool Account::makeWithdrawal(int withdrawal)
{
    int check;
    int p_amount;

    p_amount = _amount;
    check = _amount - withdrawal;
    if(check >= 0)
    {
         _amount -= withdrawal;
        
         _totalAmount -= withdrawal;
         _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << "[";
        _displayTimestamp();
        std::cout << "]";
        std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:"; 
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
         return (true);
    }
     std::cout << "[";
    _displayTimestamp();
    std::cout << "]";
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:"; 
    std::cout << "refused" << std::endl;
    return (false);        
}



int		Account::checkAmount( void ) const
{
    if(_amount > 0)
        return (1);
    return (0);
}

Account::~Account()
{
    std::cout << "[";
    _displayTimestamp();
    std::cout << "]";
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t now;
    tm *seperate;

    now = time(0);
    seperate = localtime(&now);

    std::cout << now << "_" << std::put_time(seperate,"%H%M%S");
}

void	Account::displayAccountsInfos( void ) 
{
    std::cout << "[";
    _displayTimestamp();
    std::cout << "]";
    std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();

    std::cout << std::endl;
}

void Account::displayStatus(void) const
{
    std::cout << "[";
    _displayTimestamp();
    std::cout << "]";
    std::cout << " index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits  << ";withdrawals:" << _nbWithdrawals << std::endl;
}


