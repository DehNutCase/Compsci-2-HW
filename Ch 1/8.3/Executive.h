#pragma once
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "stdafx.h"
#include <string>
#include "Manager.h"

class Executive: public Manager
{
public:
	void print();
	Executive(std::string initial_department, std::string employee_name, double initial_salary);
};
#endif
