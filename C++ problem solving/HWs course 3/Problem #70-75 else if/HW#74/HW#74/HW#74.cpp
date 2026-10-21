#include<iostream>
using namespace std;
void calculator(int& x)
{
	cout << "Welcome to your calender :)\n";
	cout << "Insert a Number from 1-7:  \n";
	cin >> x;
}
	void days(int& x)
 {
	if (x == 1) {

		cout << "Sunday" << endl;
	}
	else if (x == 2) {

		cout << "Monday" << endl;
	}
	else if (x == 3) {

		cout << "Tuesday" << endl;
	}
	else if (x == 4) {

		cout << "Wednesday" << endl;
	}
	else if (x == 5) {

		cout << "Thursday" << endl;
	}
	else if (x == 6) {

		cout << "Friday" << endl;
	}
	else if (x == 7) {

		cout << "Saturday" << endl;
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