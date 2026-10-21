#include<iostream>
using namespace std;
int rect(int x, int y)
{
	
	return x * y;
}
int main()
{
	int x, y;
	cout << "this function will calculate your rectangle area\n\n";
	cin >> x;
	cout << "you inserted the width" << endl;
	cin >> y;
	cout << "you inserted the length\n" << endl;
	cout <<"you rectangle area is: " << rect(x, y);
	return 0;
}
