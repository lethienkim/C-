#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class PayRoll {
private:
    string name;
    string department;
    double hours;
    double payRate;

public:
   
    PayRoll() {}

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

        
    double calculateGrossPay() const {
        double regularPay = (hours <= 40) ? hours * payRate : 40 *payRate;
        double overtimePay = (hours > 40) ? (hours - 40) * 1.5 * payRate : 0;
        return regularPay + overtimePay;
    }
};

int main() {
    const int numEmployees = 4;
    PayRoll employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
       string name, dept;
	   double hours, rate;
	   
	   cout << "Enter employee name "<< i+1<< ": ";
       getline(cin, name);

       cout << "Enter department: ";
       getline(cin, dept);
	   
	   cout << "Enter hours worked: ";
	   cin >> hours;

       cout << "Enter hourly pay rate: ";
       cin >> rate;
       cout<<endl;
	   cin.ignore();
	   
	   employees[i].setName(name);
	   employees[i].setDepartment(dept);
	   employees[i].sethours(hours);
	   employees[i].setpayRate(rate);
    }

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee Name "<< i+1<< ": " << employees[i].getName() << endl;
        cout << "Department: " << employees[i].getDepartment() <<endl;
        cout << "Hours Worked: " << employees[i].getHoursWorked() << endl;
        cout << "Hourly Pay Rate: $" << fixed<<setprecision(2)<<employees[i].getHourlyPayRate() << endl;
        cout << "Gross Pay: $" <<fixed<<setprecision(2)<< employees[i].calculateGrossPay() << endl << endl;
    }

    return 0;
}