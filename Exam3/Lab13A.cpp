#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream inFile, outFile;

    char input;
    inFile.open("Lab13-data.txt", ios::in);
    outFile.open("Lab13-encrypteddata.txt", ios::out);

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }

    while (inFile>> input) {
    	inFile.get(input);
        cout << "Raw data: " << input<< endl;
        input += 10;
        outFile.put(input);
        cout << "Encrypted code: " << input << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}


