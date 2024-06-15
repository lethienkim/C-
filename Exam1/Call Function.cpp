#include <iostream>
using namespace std;

void getInfo(string &name);
void getInfo1(int &age);
void getInfo2(float &salary);
int main()
{
	string name;
    int age;
    float salary;
	getInfo(name);
	getInfo1(age);
	getInfo2(salary);
	cout <<"You just enter: "<<endl;
	cout <<"Name: "<<name<<endl;
	cout <<"Age: "<<age<<endl;
	cout <<"Salary: "<<salary<<endl;
	return 0;
}


void getInfo(string &name) 
{

	cout<<"Please input the Name, Age, Salary: "<<endl;
	cin>> name;
}

void getInfo1(int &age)
{

	//cout<<"Please input the Age: "<<endl;
	cin>>  age;
}
void getInfo2(float &salary)
{

	//cout<<"Please input the Salary: "<<endl;
	cin>>  salary;
}
