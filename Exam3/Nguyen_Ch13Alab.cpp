////////////////////////////////////////////////////////////////////
// Austin Community College - COSC 1337
// This program ask the user to enter their first file and second file, 
// after that it will encrypt all the letter inside the first file and store at the second file
// This program was written by Khoa Nguyen
// Date written 5/8/2022
////////////////////////////////////////////////////////////////////
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string input, output;
    cout <<"Enter the name of the input file: "; cin >> input;
    cout <<"Enter the name of the output file: "; cin >> output;
    cout << endl;
    fstream fin(input, ios::in);
    fstream encrypted(output, ios:: out);
    string line;
    if(!fin.is_open())
    {
        cout<<"Invalid file\n";
        return 0;
    }
    while(!fin.eof()){
        getline(fin,line);
        for(int i = 0; i < line.length(); i++){
            encrypted.put(line [i]+10);
        }
        encrypted << endl;
	
    // Print the encrypted content
    cout << "Encrypted data: ";
    cout << encrypted << endl;
    }
    cout <<"Successfully Encrypted!";
    return 0;
}