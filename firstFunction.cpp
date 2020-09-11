#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

double power(double base, double exponent)
{
	double result = 1;

	for (int i=0; i<exponent; i++)
	{
		result = result * base;
	}

	return result;
}

void print_pow(double base, double exponent)
{
	double myPower = power(base, exponent);
	cout <<base<<" raised to the power of "<<exponent<<" is "<< myPower <<"."<< std::endl;
}

int main()
{
	double base;
	double exponent;
	cout << "What is your base?: ";
	cin >> base;
	cout << "What is your exponent?: ";
	cin >> exponent;
	print_pow(base, exponent);
}
