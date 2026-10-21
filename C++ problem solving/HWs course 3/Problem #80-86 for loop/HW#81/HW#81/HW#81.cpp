

#include <iostream>
using namespace std;

int print(int x);

int main()
{
	cout << "please insert a number to finish the loop: " << endl;
	int x;
	cin >> x;
	cout << print(x);
}
int print(int x) {


	for (int i = x; i >= 1; i--)
	{
		cout << "loop " << i << endl;
	}
	return x;
}