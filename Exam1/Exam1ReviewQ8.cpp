#include <iostream>

using namespace std;

int main() {
    int s1,s2,s3;
    double a;
    cout <<"Please enter the three score separated by space:";
    cin >> s1>>s2>>s3;
    a=(s1+s2+s3)/3;
    
    cout <<"Average score is "<< a<<"."<<endl;
    
    return 0;
}