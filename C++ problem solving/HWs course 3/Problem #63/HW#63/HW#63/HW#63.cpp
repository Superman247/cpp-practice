#include<iostream>
using namespace std;
int main()
{
	short int x[3];
	cout << "Please Enter Grade1 ? \n";
	cin >> x[0];
	cout << endl << "Please Enter Grade2 ? \n";
	cin >> x[1];
	cout << endl << "Please Enter Grade3 ? \n";
	cin >> x[2];
	cout << "*************************************\n\n";
		cout << "The AVG of the grades is: " << (x[0] + x[1] + x[2]) / 3;
}