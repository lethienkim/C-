//Thienkim Le
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Define a class named PayRoll to represent employee information and payroll calculations
class PayRoll {
private:
    string name;
    string department;
    double hours;
    double payRate;

public:
    // Default constructor for PayRoll class
    PayRoll() {}

    // Getter functions for retrieving private member variables
    string getName() const {
        return name;
    }

    string getDepartment() const {
        return department;
    }

    double getHourlyPayRate() const {
        return payRate;
    }

    double getHoursWorked() const {
        return hours;
    }

    // Setter functions for updating private member variables
    void setName(const string& employeeName) {
        name = employeeName;
    }

    void setDepartment(const string& dept) {
        department = dept;
    }

    void setpayRate(double rate) {
        payRate = rate;
    }

    void sethours(double hoursworked) {
        hours = hoursworked;
    }

    // Function to calculate gross pay based on hours worked and pay rate
    double calculateGrossPay() const {
    // Calculate regular pay for the first 40 hours
    double regularPay;
    if (hours <= 40) {
        regularPay = hours * payRate;
    } else {
        regularPay = 40 * payRate;
    }

    // Calculate overtime pay for hours worked beyond 40
    double overtimePay;
    if (hours > 40) {
        overtimePay = (hours - 40) * 1.5 * payRate;
    } else {
        overtimePay = 0;
    }

    // Return the sum of regular pay and overtime pay
    return regularPay + overtimePay;
}
    
};


int main() {
    // Constant for the number of employees
    const int numEmployees = 4;

    // Create an array of PayRoll objects to store employee information
    PayRoll employees[numEmployees];

    // Input loop to gather information for each employee
    for (int i = 0; i < numEmployees; ++i) {
        string name, dept;
        double hours, rate;

        // Prompt user for employee information
        cout << "Enter employee name " << i + 1 << ": ";
        getline(cin, name);

        cout << "Enter department: ";
        getline(cin, dept);

        cout << "Enter hours worked: ";
        cin >> hours;

        cout << "Enter hourly pay rate: ";
        cin >> rate;
        cout << endl;

        // Ignore the newline character left in the buffer after cin
        cin.ignore();

        // Set the information for the current employee in the array
        employees[i].setName(name);
        employees[i].setDepartment(dept);
        employees[i].sethours(hours);
        employees[i].setpayRate(rate);
    }

    // Output loop to display employee information and calculated gross pay
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee Name " << i + 1 << ": " << employees[i].getName() << endl;
        cout << "Department: " << employees[i].getDepartment() << endl;
        cout << "Hours Worked: " << employees[i].getHoursWorked() << endl;
        cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << employees[i].getHourlyPayRate() << endl;
        cout << "Gross Pay: $" << fixed << setprecision(2) << employees[i].calculateGrossPay() << endl << endl;
    }

    return 0;
}
