//*****************************************
// Write the program to convert the sentence to a string 
// Programmer: ThienKim Le
// Completed:11/25/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// Convert the sentence to a string in which the words are separated by spaces 
// Only the first word starts with an uppercase letter.
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


int main() {
    // Prompt the user to input a sentence with words running together
    // The first character of each word is an uppercase letter 
    cout << "Enter a sentence with words running together: ";
    
    string enteredString;
    
    // Read a line of input (including spaces) from the user and store it in the 'input' variable
    getline(cin, enteredString);

    // Convert the sentence to a string with words separated by spaces
    string separatedString="";

    // Iterate through each character in the input string
    for (int i = 0; i < enteredString.length(); ++i) {
    // Check if the current character is an uppercase letter (excluding the first character)
    if ( islower(enteredString[i-1]) and isupper(enteredString[i])) {
        // Add a space before each uppercase letter (except the first one)
        separatedString += ' ';
        separatedString += tolower(enteredString[i]);	// Formatt that letter into lowercase and add it in the string
    }
    else{
    	// Append the current character to the separatedString
    	separatedString += enteredString[i];
	}
    }

    // Display the new string with words separated by spaces
   cout <<"\n Your string after separation: "  << separatedString << endl;

    return 0;
}
