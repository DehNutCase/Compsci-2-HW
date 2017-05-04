#pragma once
#ifndef STUDENT
#define STUDENT
#include "stdafx.h"
#include <string>
#include <vector>

class Student
{
public:
	Student(std::string name);
	Student();
	std::string get_name();
	void add_quiz(int score);
	double get_average_score();
private:
	std::string name;
	std::vector<int> scores;
};

#endif
