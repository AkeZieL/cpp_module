/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:09:33 by mbilly            #+#    #+#             */
/*   Updated: 2023/10/30 13:16:28 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += _amount;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
};

Account::~Account (void) {
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
};

int Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
};

int Account::getTotalAmount(void) {
	return (Account::_totalAmount);
};

int Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
};

int Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
};

void _displayTimestamp(void) {

	//temps en seconde depuis 1970
	std::time_t t = std::time(nullptr);
	//extraire annee mois jours
	std::tm tm = *std::localtime(&t);
	//formater comme on veut
	std::cout << "[" << std::put_time(&tm, "%Y%m%d_%H%M%S") << "]" << std::endl;
};

void Account::displayAccountsInfos(void) {
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
};

void Account::makeDeposit(int deposit) {
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";amounts:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
};

bool Account::makeWithdrawal(int withdrawal) {
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
};

int Account::checkAmount(void) const {
	return (this->_amount);
};

void Account::displayStatus(void) const {
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawls:" << this->_nbWithdrawals << std::endl;
};

void Account::_displayTimestamp(void) {

};
