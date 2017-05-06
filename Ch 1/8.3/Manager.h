#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "stdafx.h"
#include <string>
#include "ccc_empl.h"

/**
A basic employee class that is used in many examples
in the book "Computing Concepts with C++ Essentials"
*/
class Manager: public Employee
{
public:
	Manager();
	Manager(std::string initial_department, std::string employee_name, double initial_salary);
	void print();
	std::string get_department();
protected:
	std::string department;
};

#endif
