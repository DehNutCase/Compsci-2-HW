#include "stdafx.h"
#include "Account.h"

Account::Account()
{
	;
}
Account::Account(double n)
{
	balance = n;
	interest = 0;
}

void Account::deposit(double n)
{
	balance += n;
}

void Account::withdraw(double n)
{
	balance -= n;
}

void Account::daily_interest()
{
	balance += (balance * interest / 30);
}

double Account::get_balance()
{
	return balance;
}
