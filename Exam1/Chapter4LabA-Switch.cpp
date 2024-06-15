#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	const int airSpeed=1100;
	const int waterSpeed=4900;
	const int steelSpeed=16400;
	int choice;
    float distance, result;
	string medium;
	
	cout<<"This program will tell you how loong it takes a sound wave"<<endl;
	cout<<"to travel a specific distance through a particular medium."<<endl;
	cout<<endl;
	cout<<"Select a substance for the sound to travel through:"<<endl;
	cout<<"     1. Air"<<endl;
	cout<<"     2. Water"<<endl;
	cout<<"     3. Steel"<<endl;
	cin>>choice;
	cout<<endl;
	cout<<"Enter the number of feet the sound wave will travel:  ";
	cin >>distance;
	
	switch (choice){
		case 1:
			medium="air";
			result=distance/airSpeed;
			break;
		case 2:
			medium="water";
			result=distance/waterSpeed;
			break;
		case 3:
			medium="steel";
			result=distance/steelSpeed;
			break;
}
		
	cout<<"The sound wave will travel "<<distance<<" feet through "<<medium<<" in ";
	cout<<fixed<<setprecision(4)<<result<<" seconds."<<endl;
	
	return 0;
}