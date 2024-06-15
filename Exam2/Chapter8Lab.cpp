//*****************************************
// Write the program to use the Array of Payroll Objects
// Programmer: ThienKim Le
// Completed:10/21/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

// This C++ program reads payroll data from a file and calculates the gross pay for each employee.
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


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Class definition for PayRoll
class PayRoll{
private:
	double hourlyPayRate;
	double hoursWorked;
public:
	void sethourlyPayRate(double rate){		// Setter function for hourly pay rate
		hourlyPayRate=rate;
	}
	void sethoursWorked(double hours){		// Setter function to set the hours worked
		hoursWorked=hours;
	}
	double calcGrossPay(){							// Function to calculate gross pay based on
		double grossPay=hoursWorked*hourlyPayRate;	//hourly pay rate and hours worked
		return grossPay;
	}
};

int main(){
	// Create an array of PayRoll objects to store employee data
	PayRoll employees[7];
	
	// Open a file for reading payroll data
	fstream inputFile ("payroll.dat");
	if(!inputFile){
		cout<<"Error opening file."; // Display an error message if file cannot be opened
	}
	
	// Read hourly pay rates and hours worked from the file and set them for each employee
	for(int i=0;i<7;i++){
		double payRate, hours;
		inputFile>>payRate>>hours;	// Read pay rate and hours from the file
		employees[i].sethourlyPayRate(payRate);
		employees[i].sethoursWorked(hours);
	}
	inputFile.close(); // Close the file after reading
	
	// Display the employees and their corresponding gross pay
	cout<<"Employees"<<setw(14)<<"Gross Pay"<<endl;
	cout<<"========="<<setw(14)<<"========="<<endl;
	for(int i=0;i<7;i++){
		double grossPay= employees[i].calcGrossPay();	// Calculate gross pay for employee i
		cout<<setw(4)<<i+1<<":";
		cout<<setw(11)<<showpoint<<fixed<<setprecision(2)<<" $ "<<grossPay<<endl;
	}
	return 0;
}
