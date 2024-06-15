#include <iostream>
using namespace std;
int main ()
{
	string name;
	name = "Thienkim Le";
	cout << "Hello there!" << "\n";
	cout << "My name is " << name << "\n";
	cout << "43 years old " << "\n";
	double amount;
 	cout << "A float is stored in "
      	 << sizeof(float) << " bytes\n";
 	cout << "Variable amount is stored in "
      	 << sizeof(amount) << " bytes\n" <<"\n";
	int num1, num2, sum;
	num1=62;
	num2=99;
	sum=num1+num2;
	cout << "Total is: " << sum <<"\n";

	return 0;
}