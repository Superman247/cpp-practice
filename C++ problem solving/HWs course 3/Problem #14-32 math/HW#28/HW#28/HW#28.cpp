#include<iostream>
using namespace std;

int main()
{
	float Bill, total;

	cout << "This program is designed to calculate how much is the price including 10% service fee and 16% sales tax.\n";
	cout << "How Much is your food please: ";
	cin >> Bill;
	total = Bill *= 1.1;
	total *= 1.16;

	cout << "\nYour toal bill is: " << total << endl;
	

	return 0;

}