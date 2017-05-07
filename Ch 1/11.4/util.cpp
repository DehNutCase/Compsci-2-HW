#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "util.h"

/**
Swaps two integers.
@param x the first integer to swap
@param y the second integer to swap
*/
void swap(Employee& x, Employee& y)
{
	Employee temp = x;
	x = y;
	y = temp;
}

/**
Prints all elements in a vector
@param a the vector to print
*/
void print(vector<Employee> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i].get_name() << std::endl;
	}
}

/**
Sets the seed of the random number generator.
*/
void rand_seed()
{
	int seed = static_cast<int>(time(0));
	srand(seed);
}

/**
Computes a random integer in a range.
@param a the bottom of the range
@param b the top of the range
@return a random integer x, a <= x and x <= b
*/
int rand_int(int a, int b)
{
	return a + rand() % (b - a + 1);
}

