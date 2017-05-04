#include "stdafx.h"
#include "Student.h"

Student::Student(std::string his_name)
{
	name = his_name;
}

Student::Student()
{
	;
}

std::string Student::get_name(){
	return name;
}

void Student::add_quiz(int score){
	scores.push_back(score);
}

double Student::get_average_score(){
	int sum = 0;
	for (int i = 0; i < scores.size(); i++)
	{
		sum += scores[i];
	}
	double average = sum / scores.size();
	return average;
}
