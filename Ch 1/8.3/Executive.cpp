#include "stdafx.h"
#include "Executive.h"
#include <iostream>
#include <string>

void Executive::print()
{
	std::cout << "Executive ";
	Manager::print();
}

Executive::Executive(std::string initial_department, std::string employee_name, double initial_salary)
{
	department = initial_department;
	name = employee_name;
	salary = initial_salary;
}
