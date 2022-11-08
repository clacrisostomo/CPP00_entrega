/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:19:02 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/08 20:19:03 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit){
    this->_accountIndex = Account::getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount += initial_deposit;
    Account::_nbAccounts++;
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";created:" << std::endl;
}

Account::~Account(){
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
}

void    Account::displayAccountsInfos(void){
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] ";
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::getNbAccounts(void){
    return (_nbAccounts);
}

int Account::getTotalAmount(void){
    return (_totalAmount);
}

int Account::getNbDeposits(void){
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp(void){
    time_t  timer;
    struct tm *date;

    time(&timer);
    date = localtime(&timer);
    std::cout << date->tm_year + 1900 <<
    std::setfill('0') << std::setw(2) << date->tm_mon + 1 <<
    std::setfill('0') << std::setw(2) << date->tm_mday << "_" <<
    std::setfill('0') << std::setw(2) << date->tm_hour <<
    std::setfill('0') << std::setw(2) << date->tm_min <<
    std::setfill('0') << std::setw(2) << date->tm_sec;
}

void    Account::displayStatus(void) const{
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit){
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex;
    std::cout << ":p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit;
    Account::_amount += deposit;
    std::cout << ";amount:" << _amount;
    Account::_totalAmount += deposit;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal){
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this ->_amount << ";withdrawal:";
    if (Account::checkAmount() < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
    {
        std::cout << withdrawal;
        Account::_amount = _amount - withdrawal;
        std::cout << ";amount:" << _amount;
        Account::_totalAmount -= withdrawal;
        Account::_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}

int Account::checkAmount(void) const{
    return (_amount);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;