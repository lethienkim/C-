#include <iostream>
#include <iomanip>
#include <algorithm>

// Function to get the data from the user
void getData(int* movies, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Enter the number of movies watched by student " << i + 1 << ": ";
        std::cin >> *(movies + i);

        while (*(movies + i) <= 0) {
            std::cout << "Please enter a positive integer: ";
            std::cin >> *(movies + i);
        }
    }
}

// Function to sort the data
void sortData(int* movies, int numStudents) {
    std::sort(movies, movies + numStudents);
}

// Function to display the sorted list
void displayData(int* movies, int numStudents) {
    std::cout << "Number of Movies Watched" << std::endl;
    std::cout << "------------------------" << std::endl;
    for (int i = 0; i < numStudents; i++) {
        std::cout << *(movies + i) << std::endl;
    }
    std::cout << "------------------------" << std::endl;
}

// Function to calculate and return the average
double calculateAverage(int* movies, int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += *(movies + i);
    }
    return static_cast<double>(sum) / numStudents;
}

int main() {
    int numStudents;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    while (numStudents <= 0) {
        std::cout << "Please enter a positive integer: ";
        std::cin >> numStudents;
    }

    int* movies = new int[numStudents];

    getData(movies, numStudents);
    sortData(movies, numStudents);
    displayData(movies, numStudents);

    double average = calculateAverage(movies, numStudents);
    std::cout << "Average " << std::fixed << std::setprecision(1) << average << std::endl;

    delete[] movies;

    return 0;
}
