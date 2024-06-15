#include <iostream>

using namespace std;

int main() {
    float score;
    
    cout <<"Please enter the score: ";
    cin >>score;
    
    if (score>=90)
    	cout <<"Excellent";
    else if (score>=80)
    	cout <<"Good";
    else 
    	cout <<"Try Harder";
    	
    return 0;
}