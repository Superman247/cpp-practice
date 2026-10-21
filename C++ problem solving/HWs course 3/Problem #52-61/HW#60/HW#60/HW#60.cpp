#include<iostream>
#include<cmath>
using namespace std;

int circle(int l) {

	return pow(l, 2) / (4 * 3.14);
}

int main() {

	cout << "This program will calculate circle area along the circumference\n";
	int l;
	cout << "enter the length of the circumference: ";

	cin >> l;
	cout << endl << circle(l) << endl;

	return 0;
}