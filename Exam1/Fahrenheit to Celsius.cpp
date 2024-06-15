#include <iostream>		// input/output declarations
using namespace std;

int main()
{
	// Variable declaration
	float tempF;
	float tempC;
	cout <<"Please input the  temperature in Fahrenheit degree: " << endl;
	cin >> tempF;
	tempC = (5.0/9) * (tempF - 32);
	cout <<"The temperature in Celsius is: " <<tempC << endl; 
	return 0;
	
}