#include<iostream>
using namespace std;
int main() {

	short int op;

	cout << "please insert a month number:\n(1)January\n(2)February\n(3)March\n(4)April\n(5)May\n(6)June\n(7)July\n(8)August\n(9)September\n(10)October\n(11)November\n(12)December ";
	cin >> op;

	switch (op)
	{
	case 1:
		cout << "your result is: January" << endl;
		break;

	case 2:

		cout << "your result is: February" << endl;

		break;
	case 3:
		cout << "your result is: March" << endl;
		break;
	case 4:
		cout << "your result is: April" << endl;
		break;
	case 5:
		cout << "your result is: May" << endl;
		break;
	case 6:
		cout << "your result is: June" << endl;
		break;
	case 7:
		cout << "your result is: July" << endl;
		break;
	case 8:
		cout << "your result is: August" << endl;
		break;
	case 9:
		cout << "your result is: September" << endl;
		break;
	case 10:
		cout << "your result is: October" << endl;
		break;
	case 11:
		cout << "your result is: November" << endl;
		break;
	case 12:
		cout << "your result is: December" << endl;
		break;
	default:
		cout << "ERROR;; miss input. :(";
	}
	return 0;
}