//*****************************************
// Write the program to use the function and parameters
// Programmer: ThienKim Le
// Completed:10/14/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// This program that determines and display which car is the most fuel effiefient on miles per gallon.
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
#include <string>
using namespace std;

void calcMPG(float distance, float gallons, float& mpg) {
    mpg = distance / gallons;
}

int main() {
    string carMake1, carMake2, carMake3;
    float gallons1, gallons2, gallons3;
    float distance = 500.0;
    float mpg1, mpg2, mpg3;

    cout << "Enter car make 1: ";
    cin >> carMake1;
    cout << "Enter gallons 1: ";
    cin >> gallons1;

    cout << "Enter car make 2: ";
    cin >> carMake2;
    cout << "Enter gallons 2: ";
    cin >> gallons2;

    cout << "Enter car make 3: ";
    cin >> carMake3;
    cout << "Enter gallons 3: ";
    cin >> gallons3;

    // Call calcMPG function
    calcMPG(distance, gallons1, mpg1);
    calcMPG(distance, gallons2, mpg2);
    calcMPG(distance, gallons3, mpg3);

    float mostEfficientCar;
    
    if (mpg1 >= mpg2 && mpg1 >= mpg3)
        mostEfficientCar = mpg1;
    else if (mpg2 >= mpg3)
        mostEfficientCar = mpg2;
    else
        mostEfficientCar = mpg3;

    cout << "The most efficient car has " << mostEfficientCar << " miles per gallon." << endl;

    return 0;
}