////////////////////////////////////////////////////////////////////
// Austin Community College - COSC 1337
// This program ask the user to enter their encrypted file and second file, 
// after that it will restore the information to its original state and write it to the second file
// This program was written by Khoa Nguyen
// Date written 5/8/2022
////////////////////////////////////////////////////////////////////
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string input, output;
    cout <<"Enter the name of the file you would like to decrypt: "; cin >> input;    ///I have to be specific with the file location C:\\Users\\Desktop\\filetesting\\encrypted.txt
    cout <<"Enter the name of file to store data: "; cin >> output;
    cout << endl;
    fstream fin(input, ios::in);
    if(!fin.is_open())
    {
        cout<<"Invalid file\n";
        return 0;
    }
    fstream encrypted(output, ios:: out);
    string line;
    if(!encrypted.is_open())
    {
        cout<<"Invalid encrypted file\n";
        return 0;
    }
    while(!fin.eof()){
        getline(fin,line);
        for(int i = 0; i < line.length(); i++){
            encrypted.put(line [i]-10);
        }
        encrypted << endl;

    }
    cout <<"Successfully Decrypted!";
    return 0;
}