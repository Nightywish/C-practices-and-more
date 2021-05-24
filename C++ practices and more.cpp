
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int exponent, base;
	cout << "what is the base?" << endl; 
		cin >> base; //user input 
	cout << "what is the exponent?"<<endl;
		cin >> exponent;// user input exponent
		double power = pow(base, exponent);
		cout << "your result is " << power << endl;
	return 0;



}
