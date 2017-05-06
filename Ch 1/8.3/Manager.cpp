#include "stdafx.h"
#include "Manager.h"
#include <iostream>

Manager::Manager()
{
	;
}

Manager::Manager(std::string initial_department, std::string employee_name, double initial_salary)
{
	department = initial_department;
	name = employee_name;
	salary = initial_salary;
}

void Manager::print()
{
	std::cout << "Name: " << get_name() << "\nDepartment :" << get_department() << "\nSalary: " << get_salary() << std::endl;
}

std::string Manager::get_department()
{
	return department;
}
