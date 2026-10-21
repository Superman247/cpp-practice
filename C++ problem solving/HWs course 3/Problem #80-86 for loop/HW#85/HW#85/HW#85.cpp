#include<iostream>
using namespace std;
int pow(int x,int y);
int main() {
	int a, b;
	cout << "Please inset the number you want and then it's power:";
	cout << "\nthe number: ";
	cin >> a;
	cout << "\nThe power: ";
	cin >> b;

	cout << pow(a, b);

}

int pow(int x, int y) {

	int p = 1;

		for (int i = 0; i < y; i++) {
			p *= x;
		}



	return p;

}