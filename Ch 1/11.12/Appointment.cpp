#include "stdafx.h"
#include "Appointment.h"

Appointment::Appointment(std::string i_description, int i_day, int i_stime, int i_etime)
{
	description = i_description;
	stime = i_stime;
	etime = i_etime;
	day = i_day;
}

int Appointment::get_day()
{
	return day;
}

int Appointment::get_time()
{
	return stime;
}

int Appointment::get_etime()
{
	return etime;
}

