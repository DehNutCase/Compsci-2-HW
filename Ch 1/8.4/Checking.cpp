#include "stdafx.h"
#include "Checking.h"

Checking::Checking(int n)
{
	balance = n;
	interest = 3;
}

void Checking::daily_interest()
{
	if (balance > 1000)
	{
		balance += (balance - 1000) * interest / 30;
	}
}
