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

