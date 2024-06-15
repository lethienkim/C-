//*****************************************
// Write the program to sort the arrays and then to determines the median of a sorted array
// Programmer: ThienKim Le
// Completed:10/22/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?
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
#include <algorithm>
using namespace std;

// Function to sort the array
void sortArray(int* arr, int size) {
    sort(arr, arr + size);
}

// Function to calculate the median
double calculateMedian(int* arr, int size) {
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

// Function to print the sorted array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
       cout << *(arr + i) << " ";
    }
 	cout << endl;
}

int main() {
    // Initialize even and odd arrays
    int evenArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
    int oddArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22};

    int evenSize = sizeof(evenArray) / sizeof(evenArray[0]);
    int oddSize = sizeof(oddArray) / sizeof(oddArray[0]);

    // Sort arrays
    sortArray(evenArray, evenSize);
    sortArray(oddArray, oddSize);

    // Print sorted arrays
    cout << "Median of the odd array:" << endl;
    printArray(oddArray, oddSize);
	cout << "is " << calculateMedian(oddArray, oddSize) << endl;
	
    cout << "Median of the even array:" << endl;
    printArray(evenArray, evenSize);
	cout << "is " << calculateMedian(evenArray, evenSize) << endl;

    return 0;
}
