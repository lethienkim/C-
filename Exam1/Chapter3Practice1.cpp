//*****************************************
// Calculate the annual property Tax
// Programmer: ThienKim Le
// Completed:09/16/2023
// Status: Completed

// Did your program pass the testing? : Yes 
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// This program to calculate the monthly cost

//*****************************************

/*
I will abide by the ACC Honor code and answer these following questions with
full integrity and honesty, I understand if I answer "False" to any of these
 quetions, I will receive zero for this assigment
 
 1. My submission is my own work.
 2. I promise not to share my work with anyone in any form.
 3. I did not use any outside tools (including but not limited to AI chatbots) to
 complete the Lab assignment
*/

#include <iostream>		// input/output declarations
#include <iomanip>	
using namespace std;

int main()
{
	// Variable declaration
	double rent, utilities, phone, internet, monthlyCost, yearlyCost;     // The basketball player height in inches
	     
	// Ask the user for input 
	cout <<"Enter monthly cost for Rent, Utilities, Phone, Internet: $ ";
	cin >>rent >>utilities >>phone >>internet;
	
	
	// Calculate the monthly cost
	monthlyCost=rent+utilities+phone+internet;
	yearlyCost=monthlyCost*12;
	
	// Printing output
	cout << fixed << setprecision(2);
	cout <<"Monthly Cost:  $  " <<monthlyCost<<endl;
	cout <<"Yearly Cost :  $  " <<yearlyCost<<endl;

	return 0;
	
}
