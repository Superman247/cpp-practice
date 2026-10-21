#include<iostream>

using namespace std;

int main()
{
	short int x, y, z;
	cout << "This program is designed to calculate how much you need to pay monthly to pay off your loan.\n\n";

	cout << "Please insert the amount of money you need: ";

	cin >>x;

	cout << "\nplease insert how many months can you pay off your loan in: ";
	cin >>y;

	z = x / y;

	cout << "\nyou will have to pay " << z << " Dollars a month to pay off your loan." << endl;

	return 0;

}