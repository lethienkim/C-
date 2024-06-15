#include <iostream>
using namespace std;
int main ()
{
	//double tax, tip, meal, total;
	auto	meal = 44.50;
	auto tax = meal*0.0675;
	auto tip = (meal +tax)*0.15;
	auto total = meal + tax + tip;
	cout << "The meal cost:  $" << meal << endl;
	cout << "The tax amount: $" << tax << endl;
	cout << "The tip amount: $" << tip<< endl;
	cout << "The total bill: $" << total <<endl;
	return 0;
}