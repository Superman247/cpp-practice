#include<iostream>
using namespace std;
void readtotalsales(int &x)
{
	cout << "Lets see total comission :)\n";
	cout << "Insert The total sales:  \n";
	cin >> x;

}
void comission(int &x)
{


	if (x >= 1000000) {
		x = x * 0.01;
		cout << "Your total comission is: " << x << endl;
	}
	else if (x >=500000 || x == 999999) {
		x = x * 0.02;
		cout << "Your total comission is: " << x << endl;
	}
	else if (x >= 100000 || x == 499999) {
		x = x * 0.03;
		cout << "Your total comission is: " << x << endl;
	}
	else if (x >= 50000 || x == 99999) {
		x = x * 0.05;
		cout << "Your total comission is: " << x << endl;
	}
	else
		cout << " No comission will be taken from your total." << endl;
}

int main() {

	int x;
	

	readtotalsales(x);
	comission(x);

	return 0;
}