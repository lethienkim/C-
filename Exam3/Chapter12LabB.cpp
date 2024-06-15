//*****************************************
// Write the program with three functions:  upper, lower, and flip.
// Programmer: ThienKim Le
// Completed:11/25/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// Each functions should step through all the characters in the string
// Converting each to uppercase, lowercase and flip.
// The  flip testing each character to determine whether it is upper or lowercase
// If upper, it should convert to lower.  If lower, it should convert to upper
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
#include <cstring>

using namespace std;

// Function to convert characters in a C-style string to uppercase
void upper(char* string) {
    for (int i = 0; string[i] != '\0'; ++i) {
        string[i] = toupper(string[i]);
    }
}

// Function to convert characters in a C-style string to lowercase
void lower(char* string) {
    for (int i = 0; string[i] != '\0'; ++i) {
        string[i] = tolower(string[i]);
    }
}

// Function to flip the case of characters in a C-style string
void flip(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    // Input a string from the user
    const int maxSize = 100; // Set a maximum size
    char input[maxSize];
    cout << "Enter a string: ";
    cin.getline(input, maxSize);
    
    // Perform operations on the string
    char upperCase[maxSize];
    char lowerCase[maxSize];
    char flippedCase[maxSize];

    // Copy the input string to separate arrays for each operation
    strcpy(upperCase, input);
    strcpy(lowerCase, input);
    strcpy(flippedCase, input);

    // Apply the uppercase, lowercase, and flip functions to the respective arrays
    upper(upperCase);
    lower(lowerCase);
    flip(flippedCase);

    // Display the results
    cout << "Original String: " << input << endl;
    cout << "\n Uppercase String: " << upperCase << endl;
    cout << "\n Lowercase String: " << lowerCase << endl;
    cout << "\n Flipped Case String: " << flippedCase << endl;

   
    return 0;
}
