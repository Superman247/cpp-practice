#include<iostream>
using namespace std;
void calculator(int& x)
{
	cout << "Welcome to your calender :)\n";
	cout << "Insert a Number from 1-7:  \n";
	cin >> x;
	cout << "\n";
}
void days(int& x)
{
	if (x == 1) {

		cout << "January" << endl;
	}
	else if (x == 2) {

		cout << "February" << endl;
	}
	else if (x == 3) {

		cout << "March" << endl;
	}
	else if (x == 4) {

		cout << "April" << endl;
	}
	else if (x == 5) {

		cout << "May" << endl;
	}
	else if (x == 6) {

		cout << "June" << endl;
	}
	else if (x == 7) {

		cout << "July" << endl;
	}
	else if (x == 8) {

		cout << "August" << endl;
	}
	else if (x == 9) {

		cout << "September" << endl;
	}
	else if (x == 10) {

		cout << "October" << endl;
	}
	else if (x == 11) {

		cout << "November" << endl;
	}
	else if (x == 12) {

		cout << "December" << endl;
	}
	else
		cout << "Error:miss input" << endl;
}

int main() {

	int x;



	calculator(x);
	days(x);

	return 0;
}