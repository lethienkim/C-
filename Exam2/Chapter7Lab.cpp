//*****************************************
// Write the program to use the classes and objects
// Programmer: ThienKim Le
// Completed:10/21/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// This program that create the Tips class with the function computeTip.
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
using namespace std;


//Tips class declaration
class Tips{
private:
    double taxRate;	// This is a member variable.

public:
    
    Tips(){		 // Constructor 
     	cout << "\nTax % for this location: ";
    	cin >> taxRate;  
    	while (taxRate < 0) {
        cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
        cin >> taxRate;
    	} 
		if (taxRate == 0) {	
    	    	taxRate = 8.5;	//set default taxRate value if taxRate = 0
    	}
	}
	
    double computeTip(double b,double ti){
        double tip = (b + (b * taxRate/100)) * ti/100.0;
        return tip;
    }
};


int main(){
   	
   	cout << "This program will compute a restaurant tip based on a total" << endl;
    cout << "bill amount and the % the patron wishes to tip the server." << endl;
    double taxRate;
    char choice = 'y'; // Initialize choice to 'Y'
   	
    Tips tips;		 // Define a Demo object 
    
    while (choice == 'Y' or choice == 'y'){
        cout << "\n*****************Tip Helper**************" << endl << endl;
        double totalBill, tipRate;
        cout << "Enter the total bill: ";
        cin >> totalBill;
        cout << "Enter the tip rate % ";
        cin >> tipRate;

        double tipAmount = tips.computeTip(totalBill, tipRate);	//call the functions
        cout << "\nThe tip should be $ " << fixed <<showpoint << setprecision(2) << tipAmount << endl;
        cout << "Compute another tip (y/n)? ";
        cin >> choice;
    }

    return 0;
}