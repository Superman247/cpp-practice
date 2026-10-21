#include<iostream>
using namespace std;

int main()
{
float Penny, Nickel, Dime, Quarter, Dollar, Dcount;
	
		cout << "This program is designed to calculate how much pennies or dollar you have in your peggy bank.\n";
		cout << "Please insert the following: \n";

			cout << "How much pennies did you insert: \n";
			cin >> Penny;
			Penny = Penny * 1;
		cout << "How much Nickels did you insert: \n";
		cin >> Nickel;
		Nickel = Nickel * 5;
		cout << "How much Dimes did you insert: \n";
		cin >> Dime;
		Dime = Dime * 10;
		cout << "How much Quarters did you insert: \n";
		cin >> Quarter;
		Quarter = Quarter * 25;
		cout << "How much Dollars did you insert: \n";
		cin >> Dollar;
		Dollar = Dollar * 100;

		Dcount = Penny + Nickel + Dime + Quarter + Dollar;
			cout << "\nyou got " << Penny + Nickel + Dime + Quarter + Dollar << " Pennies in your piggy bank!\n";
			cout << "You got " << Dcount/100 << " Dollars in your piggy bavk!" << endl;

	return 0;

}