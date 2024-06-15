//*****************************************
// Write the program to encryption code
// Completed:12/05/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

//
// encryption the file, save it to the new file.
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
#include <fstream>

using namespace std;

int main() {
    fstream inFile, outFile;

    string message;
    string encrypted;
    char ch;

    inFile.open("Lab13-data.txt", ios::in);
    outFile.open("Lab13-encrypteddata.txt", ios::out);

    // Check if the input file is opened successfully
    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }

    // Read the input file character by character and encrypt
    while (inFile.get(ch)) {
        message += ch;
        // Apply encryption (adding 10 to ASCII code)
        char encryptedChar = ch + 10;
        encrypted += encryptedChar;
        // Write the encrypted character to the output file
        outFile.put(encryptedChar);
    }

    // Close the files
    inFile.close();
    outFile.close();

    // Print the original content    
	cout << "Original Content: ";
    
    cout << message << endl;

    // Print the encrypted content
    cout << "Encrypted data: ";
    cout << encrypted << endl;

    cout << "\nFile encryption complete." << endl;

    return 0;
}

