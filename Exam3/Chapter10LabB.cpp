//*****************************************
// Write the program to creat an array, sort the array and then to calculate the average of array.
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
#include <iomanip>
#include <algorithm>
using namespace std;

// Function to get the data from the user
void getData(int* movies, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
	    cout << "Enter the number of movies watched by student " << i + 1 << ": ";
        // Read the input and store it in the array using pointer notation
        cin >> *(movies + i);

        // Validate that the entered value is a positive integer
        while (*(movies + i) <= 0) {
            cout << "Please enter a positive integer: ";
            cin >> *(movies + i);
        }
    }
}

// Function to sort the data
void sortData(int* movies, int numStudents) {
    // Use the sort function from the algorithm header to sort the array
    sort(movies, movies + numStudents);
}

// Function to display the sorted list
void displayData(int* movies, int numStudents) {
    cout << "\nNumber of Movies Watched" << endl;
    cout << "------------------------" << endl;

    // Iterate through the sorted array and display each value
    for (int i = 0; i < numStudents; i++) {
        cout << *(movies + i) << endl;
    }
    cout << "------------------------" << endl;
}

// Function to calculate and return the average
double calculateAverage(int* movies, int numStudents) {
    int sum = 0;

    // Calculate the sum of all elements in the array
    for (int i = 0; i < numStudents; i++) {
        sum += *(movies + i);
    }

    // Calculate and return the average as a double
    return static_cast<double>(sum) / numStudents;
}

// Main function
int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Validate that the entered value is a positive integer
    while (numStudents <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> numStudents;
    }

    // Dynamic memory allocation for an array to store the number of movies watched by each student
    int* movies = new int[numStudents];

    // Call the function to get data from the user
    getData(movies, numStudents);
    // Call the function to sort the data
    sortData(movies, numStudents);
    // Call the function to display the sorted data
    displayData(movies, numStudents);

    // Calculate and display the average number of movies watched
    double average = calculateAverage(movies, numStudents);
    cout << "Average " << fixed << setprecision(1) << average << endl;

    // Free the dynamically allocated memory
    delete[] movies;

    return 0;
}

