#pragma once

#include "stdafx.h"

class Account
{
public:
	Account();
	Account(double n);
	void deposit(double n);
	void withdraw(double n);
	void daily_interest();
	double get_balance();
protected:
	double balance;
	double interest;
};
