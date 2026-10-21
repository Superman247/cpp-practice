#include<iostream>
#include<cmath>
using namespace std;
int circle(int x)
{

	return 3.14 * pow(x,2);
}
int main()
{
	int x, y;
	cout << "this function will calculate your circle area \n\n";
	cin >> x;
	cout << "you inserted the Half diameter" << endl;
	
	cout << "you circle area is: " << circle(x);
	return 0;
}
