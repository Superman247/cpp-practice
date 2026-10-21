#include<iostream>
#include<cmath>
using namespace std;
int circle(int x)
{

	return (3.14 * pow(x, 2) )/ 4;
}
int main()
{
	int x, y;
	cout << "This function will calculate your circle area through the diameter \n\n";
	cin >> x;
	cout << "\nyou inserted the  diameter" << endl;

	cout << "your circle area is: " << circle(x)<<endl;
	return 0;
}
