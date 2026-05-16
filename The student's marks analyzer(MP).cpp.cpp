#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter number of students:";
	cin >> n;
	
	int marks[n];
	int total = 0;
	
	cout << "Enter marks of" << n <<"Students:";
	for (int i = 0; i < n; i++) {
		cin >> marks[i];
		total += marks[i];
	}
	
	float average = (float)total / n;
	
	cout << "Total Marks =" << total <<endl;
	cout << "Average Marks =" << average <<endl;
	
	return 0;
}
