#include "functions.h"


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
