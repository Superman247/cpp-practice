#include<iostream>
using namespace std;
int main() {
	
	short int op;
	
	cout << "please insert a day:\n(1)SUNDAY\n(2)MONDAY\n(3)TUESDAY\n(4)WEDNENSDAY\n(5)THURSDAY\n(6)FRIDAY\n(7)SATURDAY \n ";
	cin >> op;

	switch (op)
	{
	case 1:
		cout << "your result is: Sunday" << endl;
		break;

	case 2:

		cout << "your result is: Monday" << endl;

		break;
	case 3:
		cout << "your result is: Tuesday" << endl;
		break;
	case 4:
		cout << "your result is: Wednesday"  << endl;
		break;
	case 5:
		cout << "your result is: Thursday" << endl;
		break;
	case 6:
		cout << "your result is: Friday"  << endl;
		break;
	case 7:
		cout << "your result is: Saturday"  << endl;
		break;
	default:
		cout << "ERROR;; miss input. :(";
	}
	return 0;
}