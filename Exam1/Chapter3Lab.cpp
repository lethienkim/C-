#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	double propertyValue, taxRate;
	
	cout<<"Enter the actual property value: $  ";
	cin >>propertyValue;
	cout<<"Enter the anount of tax per $100 of assessed value: $  ";
	cin>>taxRate;
	
	cout<<fixed<<setprecision(2)<<endl;
	cout<<"Property Value:    $"<<"  "<<right<<setw(10)<<propertyValue<<endl;
	cout<<"Assessed Value:    $"<<"  "<<right<<setw(10)<<propertyValue*.6<<endl;
	cout<<"Property Tax:      $"<<"  "<<right<<setw(10)<<propertyValue*.6*taxRate/100<<endl;
	return 0;
}