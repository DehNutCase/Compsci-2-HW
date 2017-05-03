#include "stdafx.h"
#include "Person.h"

Person::Person(std::string his_name)
{
	name = his_name;
	best_friends_amount = 0;
}

Person::Person() {
	best_friends_amount = 0;
}
void Person::set_best_friend(Person* his_best_friend)
{
	best_friend = his_best_friend;
	his_best_friend->added_as_best_friend();
}

int Person::get_best_friends_amount()
{
	return best_friends_amount;
}

std::string Person::get_name()
{
	return name;
}

std::string Person::get_best_friend() {
	return best_friend->get_name();
}

void Person::added_as_best_friend() {
	best_friends_amount++;
}
