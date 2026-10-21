#include <iostream>

using namespace std;

int main()
{
	signed short int x, y, z, sum;

	cout << "Please insert three numbers to find the summation of them:\n";

	cin >> x;
	cin >> y;
	cin >> z;

	sum = x + y + z;
	cout << x << " +" << endl;
	cout << y << " +" << "\n";
	cout << z << endl;
	cout << "_______________________________________\n\n" << endl << "Total = " << sum << endl;


}