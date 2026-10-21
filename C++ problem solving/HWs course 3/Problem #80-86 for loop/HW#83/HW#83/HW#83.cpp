

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


	for (int i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
			cout << "loop " << i << endl;
	}
	int sum = x;
	return  sum;
}