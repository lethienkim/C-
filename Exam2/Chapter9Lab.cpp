//*****************************************
// Write the program to input the data from the user into array, then sort and display the list.
// Programmer: ThienKim Le
// Completed:10/22/2023
// Status: Completed

// Did your program pass the testing? : Yes
// If you answerd "No", what requirements wer not met?

// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met?

// This C++ program that allows the user to enter 10 songs and their artists into a playlist
//It will sort the entries by artist order and display the sorted arry.
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
#include <string>
using namespace std;

// Define a structure for each song
struct  Song{
    string artist;
    string title;
};

// Define a class for the playlist
class Playlist {
private:
    static const int ROW=10;	// Define a constant for the number of rows in the songs array
    static const int COLUMN=20;
    Song songs[ROW][COLUMN];	// Define a 2D array to store songs	

public: 
    // Function to get data from the user
    void getData() {
    	cout << "Enter Song and artist separated by enter:\n";
        for (int i = 0; i < ROW; i++) {
            getline(cin, songs[i][0].artist);
            getline(cin,songs[i][1].title);
        }
    }

    // Function to sort the list by artist using bubble sort
    void sortList() {
        for (int i = 0; i < ROW - 1; i++) {
            for (int j = 0; j < ROW - i - 1; j++) {
                if (songs[j][0].artist > songs[j + 1][0].artist) { // Swap songs[j] and songs[j+1]
                    Song temp[2] = {songs[j][0], songs[j][1]};
                    songs[j][0] = songs[j + 1][0];
                    songs[j][1] = songs[j + 1][1];
                    songs[j + 1][0] = temp[0];
                    songs[j + 1][1] = temp[1];
                }
            }
        }
    }

    // Function to display the sorted list
    void displayList() {
    cout << "\n                   Playlist                  \n";
    cout << "       Artist                   Title   \n";
    cout << "===============================================\n"<<endl;
        for (int i = 0; i < ROW; i++) {
            cout << setw(25)<<left<<songs[i][0].artist<<"\t";
			cout<< setw(35)<<left<<songs[i][1].title << "\n";
        }
    }
};

int main() {
    
	Playlist myPlaylist;

    // Step 1: Get data from the user
    myPlaylist.getData();

    // Step 2: Sort the list
    myPlaylist.sortList();

    // Step 3: Display the list
    myPlaylist.displayList();

    return 0;
}
