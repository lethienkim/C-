#include <iostream>
#include <fstream>>
using namespace std;

int main() {
    
    ofstream outfile;
	outfile.open("Tens.txt");
	for (int i=0; i<1001; i+=10)
		outfile <<i<<endl;
	outfile.close();

    return 0;
}