#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calcMPG(float distance, float gallons, float &mpg);

int main(){
    string carMake[3];
    float gallons[3];
    float mpg[3];
    float distance = 500.0;

    for(int i=0; i<3; i++){
        cout << "Enter car make " << i+1 << ": ";
        getline(cin, carMake[i]);

        do {
            cout << "Enter gallons of fuel used by " << carMake[i] << ": ";
            cin >> gallons[i];
            cin.ignore(); // Clear the input buffer

            if (gallons[i] <= 0) {
                cout << "Invalid input. Please enter a positive number." << endl;
            }
        } while (gallons[i] <= 0);

        calcMPG(distance, gallons[i], mpg[i]);
    }

    // Display results
    cout << setw(15) << "Car Make" << setw(15) << "Gallons" << setw(15) << "MPG" << endl;
    for(int i=0; i<3; i++){
        cout << setw(15) << carMake[i] << setw(15) << gallons[i];
		cout << setw(15) << fixed << showpoint << setprecision(2)<<mpg[i] << endl;
    }
    
    int mostEfficientCar = 0;
    for(int i = 1; i < 3; i++) {
        if(mpg[i] > mpg[mostEfficientCar]) 
            mostEfficientCar = i;
    }

    cout << "The most fuel-efficient car is " << carMake[mostEfficientCar];
	cout << " with " << fixed << showpoint << setprecision(2) << mpg[mostEfficientCar] << " MPG." << endl;
    return 0;
}


double calcMPG(float distance, float gallons, float &mpg) {
    mpg = distance / gallons;
    return mpg;
}
