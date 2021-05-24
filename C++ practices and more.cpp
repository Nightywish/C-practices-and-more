
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
	cout << "the result you are looking for is " << pow(base, exponent) << endl; //output
	return 0;



}
