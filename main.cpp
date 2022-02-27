#include "functions.h"

#include <iostream>
#include <string>

using namespace std;

float my_func(float a, float b, float c)
{

	float result, num1;

	if (a >= b) {
		num1 = b;
	}
	else num1 = a;
	if (num1 >= c) {
		result = c;
	}
	else result = num1;

	return result;
}

int main()
{
	float a, b, c, result;
	
	cout << "Please enter three numbers:" << endl << endl << "Number 1: ";
	cin >> a;
	cout << "Number 2: ";
	cin >> b;
	cout << "Number 3: ";
	cin >> c;
	cout << endl;

	result = my_func(a, b, c);

	cout << "The smallest number: " << result << endl;

	return 0;
}
