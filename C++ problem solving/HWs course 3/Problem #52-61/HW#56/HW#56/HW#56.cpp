#include<iostream>
#include<cmath>
using namespace std;
int rect(int x, int y)
{

	return x * sqrt(pow(y,2)*pow(x,2));
}
int main()
{
	int x, y;
	cout << "this function will calculate your rectangle area through the diagonal\n\n";
	cin >> x;
	cout << "you inserted the width" << endl;
	cin >> y;
	cout << "you inserted the length of diagonal\n" << endl;
	cout << "you rectangle area is: " << rect(x, y);
	return 0;
}
