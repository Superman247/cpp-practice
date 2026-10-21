#include<iostream>
using namespace std;
void calculator(int& x,int& y,char &z)
{
	cout << "Welcome to your calculator :)\n";
	cout << "Insert Number1:  \n";
	cin >> x;
	cout << "Insert Number2:  \n";
	cin >> y;
	cout << "Insert The operation sign: \"*\"+\"-\"/\" :\n";
	cin >> z;
}
void comission(int& x,int& y, char& z)
{


	if (z ==  '+') {
		
		cout << "Your result is: " << x+y << endl;
	}
	else if (z == '-') {

		cout << "Your result is: " << x - y << endl;
	}
	else if (z == '*') {
		
		cout << "Your result is: " << x * y << endl;
	}
	else if (z == '/') {
		
		cout << "Your result is: " << x / y << endl;
	}
	else
		cout << "Error:miss input" << endl;
}

int main() {

	int x,y;
	char z;


	calculator(x,y,z);
	comission(x,y,z);

	return 0;
}