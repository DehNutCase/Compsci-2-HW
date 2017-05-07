#pragma once
#include "stdafx.h"
#include <string>

class Appointment {
public:
	Appointment(std::string i_description, int i_day, int i_stime, int i_etime);
	int get_day();
	int get_time();
	int get_etime();
private:
	std::string description;
	int day;
	int stime;
	int etime;
};
