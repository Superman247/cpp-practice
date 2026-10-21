#include<iostream>

using namespace std;

int main()
{
	unsigned short int Age;
	cout << "Please type in your age: \n";
	cin >> Age;
	unsigned short int y = 5;
	unsigned short int sum = Age + y;
	cout << "\nAfter " << y << " Years you will be " << sum << " years old." << endl;

}