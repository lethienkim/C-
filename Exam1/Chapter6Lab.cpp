//*****************************************
// Write the program to use the function and parameters
// Programmer: ThienKim Le
// Completed:10/07/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// This program that determines which of a company's four divisions
// had the greatest sales for a quarter.
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
#include <string>
using namespace std;

// Function to get sales for a specific division
float getSales(const string& division) {
    float sales;
    do {
        cout << "Enter quarterly sales for the " << division << " division: ";
        cin >> sales;
        if (sales<0){
        	cout<<"Sales figures cannot be negative. Please re-enter.\n";
    	}
    } while (sales <= 0);
    return sales;
}

// Function to find the division with the highest sales
void findHighest(float neSales, float seSales, float nwSales, float swSales) {
    float highestSales = neSales;
  	string highestDivision = "Northeast";

    if (seSales > highestSales) {
        highestSales = seSales;
        highestDivision = "Southeast";
    }

    if (nwSales > highestSales) {
        highestSales = nwSales;
        highestDivision = "Northwest";
    }

    if (swSales > highestSales) {
        highestSales = swSales;
        highestDivision = "Southwest";
    }

    cout << "\nThe "<<highestDivision<<" division had the highest sales this quarter."<<endl;
    cout << fixed << setprecision(2);
    cout << "Their sales were $"<<highestSales<<endl;
}

int main() {
    float neSales = getSales("Northeast");
    float seSales = getSales("Southeast");
    float nwSales = getSales("Northwest");
    float swSales = getSales("Southwest");

    findHighest(neSales, seSales, nwSales, swSales);

    return 0;
}