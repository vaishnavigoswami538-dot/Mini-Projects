#include <iostream>
#include <iomanip>
using namespace std; 

int main() { 
	float celsius, fahrenheit;
	
	cout << "Enter temperature in celsius:";
	cin >> celsius;
	
	fahrenheit = (celsius * 9/5) + 32;
	
	cout << fixed << setprecision(2);
	cout << "Temperature in fahrenheit =" << fahrenheit <<endl;
	
	return 0;
} 
