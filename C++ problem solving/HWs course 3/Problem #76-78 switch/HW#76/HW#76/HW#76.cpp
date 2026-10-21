#include<iostream>
using namespace std;
int main() {
	int x, y;
	char op;
	cout << "please insert the two number you need: \n";
	cout << "\nNumber one:";
	cin >> x;
	cout << "\nNumber two:";
	cin >> y;
	cout << "please insert the operation + , - , * , / , % : \n";
	cin >> op;

	switch (op)
	{
		case  '+':
			cout <<"your result is:" << x + y <<endl;
			break;

		case  '-':

			cout << "your result is:" << x - y << endl;

			break;
		case  '*':
			cout << "your result is:" << x * y << endl;
			break;
		case  '/':
			cout << "your result is:" << x / y << endl;
			break;
		case  '%':
			cout << "your result is:" << x % y << endl;
			break;
		default:
			cout << "ERROR;; miss input. :(";
}
	return 0;
}