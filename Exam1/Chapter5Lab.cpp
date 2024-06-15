//*****************************************
// Write the program for Sales Bar Chart
// Programmer: ThienKim Le
// Completed:10/07/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?


// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// This program to ask the user to enter today's sale for each of three stores.
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

#include <iostream>	// input/output declarations
using namespace std;

int main() {
    float sales[3];
    int i, j, numAsterisks;
 
    // Get sales for each store
	for (i = 0; i <3; i++) {
    	cout << "Enter today's sales for store " << i+1<< ": ";
    	cin >> sales[i];
    
    // Validation loop
    	while (sales[i] <= 0) {
        	cout << "Please enter a positive number for Store " << i+1<< " : ";
        	cin >> sales[i];
    	}
	}

    
    // Print bar chart
    cout<<endl;
    cout << "\n     DAILY SALES\n";
    cout << "   (each * = $100)";
    cout<<endl;
     
    for (i = 0; i <3; i++) {
        cout <<endl<< "Store " << i+1<< ": ";
        numAsterisks = sales[i] / 100; // Calculate number of asterisks
        for (j = 0; j< numAsterisks; j++) {
            cout << "*";
        }
    }
    
    return 0;
}
