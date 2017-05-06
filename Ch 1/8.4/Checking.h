#pragma once
#include "Account.h"

class Checking : public Account
{
public:
	Checking(int n);
	void daily_interest();
	
};
