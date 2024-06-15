#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float usbPrice=10.56,
		  profit=0.35,
		  sellPrice;
	sellPrice = (usbPrice*profit)+usbPrice;
	cout<<fixed<<setprecision(1)<<endl;
	cout <<"To have a 35% profit, the flash drive should sell for $"<<sellPrice<<endl;
	
	return 0;
}