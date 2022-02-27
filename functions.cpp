#include "functions.h"


float findMinValue(float n1, float n2, float n3)
{
	
	
	float result, num1;

	if (n1 >= n2) {
		num1 = n2;
	}
	else num1 = n1;
	if (num1 >= n3) {
		result = n3;
	}
	else result = num1;

	return result;

}
