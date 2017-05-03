#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person(std::string name);
	Person();
	void Person::set_best_friend(Person* his_best_friend);
	int Person::get_best_friends_amount();
	std::string Person::get_name();
	std::string get_best_friend();
	void added_as_best_friend();
private:
	std::string name;
	Person* best_friend;
	int best_friends_amount;
};

#endif
