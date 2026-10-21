#include<iostream>

using namespace std;

int main()
{
	short A;
	short B;
	short c =0;

	cout << "Type 2 numbers to swap them: \n";
	cin >> A >> B;
	c = A;
	A = B;
	B = c;
	cout << A << "  " << B << "\n SWAPPED ";
	return 0;
}