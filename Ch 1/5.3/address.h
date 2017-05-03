#pragma once
#ifndef ADDRESS
#define ADDRESS
#include "stdafx.h"
#include <string>

class Address
{
public:
	Address(int ahouse_number, std::string astreet, std::string acity, std::string astate, int apostal_code);
	Address(int ahouse_number, std::string astreet, std::string aapartment_number, std::string acity, std::string astate, int apostal_code);
	void print() const;
	bool comes_before(Address other_address);

private:
	int house_number;
	std::string street;
	std::string apartment_number;
	std::string city;
	std::string state;
	int postal_code;
};


#endif
