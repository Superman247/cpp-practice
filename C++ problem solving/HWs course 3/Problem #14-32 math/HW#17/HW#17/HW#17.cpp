#include<iostream>

using namespace std;

int main()
{
	float Mark1, Mark2, Mark3;
	cout << "Please enter Mark number 1: \n";
		cin >> Mark1;

		cout << "Please enter Mark number 2: " << endl;
	cin >> Mark2;

	cout << "Please enter Mark number 3: \n";
		cin >> Mark3;

	cout << "The average mark is: " << endl << (Mark1 + Mark2 + Mark3) / 3;
	return 0;
}