#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream inFile, outFile;

    string message;
    string encrypted;
    char ch;

    inFile.open("Lab13-encrypteddata.txt", ios::in);
    outFile.open("Lab13-data.txt", ios::out);

    // Check if the input file is opened successfully
    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }

    // Read the input file character by character and encrypt
    while (inFile.get(ch)) {
        encrypted += ch;
        // Apply encryption (adding 10 to ASCII code)
        char encryptedChar = ch - 10;
        message += encryptedChar;
        // Write the encrypted character to the output file
        outFile.put(encryptedChar);

        // Add a space between words
        if (isspace(ch)) {
            message += ' ';
            outFile.put(' ');
        }
    }

    // Close the files
    inFile.close();
    outFile.close();

    // Print the encrypted content
    cout << "Encrypted data: " << encrypted << endl;

    // Print the original content
    cout << "Original Content: " << message << endl;

    cout << "\nFile encryption complete." << endl;

    return 0;
}
