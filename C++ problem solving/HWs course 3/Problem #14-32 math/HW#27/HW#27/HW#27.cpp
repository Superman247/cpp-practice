#include<iostream>
using namespace std;

int main()
{
	

	cout << "This program is designed to calculate how much is the remainder to be paid back.\n";
	int t, c, p;
	cout << "Please insert how much cash you paid: ";
		cin >> c;
		cout << "\nPlease insert how much was the total bill: ";
		cin >> t;
		p = c - t;
		cout << "this is your cash back : " << p << endl;

	return 0;

}