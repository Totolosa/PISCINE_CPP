#include "Account.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	tm		*ltm = localtime(&now);

	std::cout << "[" << ltm->tm_year + 1900 << ltm->tm_mon + 1 << ltm ->tm_mday
		<< "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:"<< _amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";closed";
	Account::_nbAccounts--;
	if (_nbAccounts > 0)
		std::cout << std::endl;
	return ;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount	
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";deposit:" << deposit << ";amount:" << _amount + deposit
		<< ";nb_deposits:" << _nbDeposits << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:";
	if (withdrawal < _amount)
	{
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return (1);
	}
	else
		std::cout << "refused" << std::endl;
	return (0);
}
