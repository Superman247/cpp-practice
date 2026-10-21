#include<iostream>
using namespace std;
void readarf(int x[3])
{
	
	cout << "Please Enter Grade1 ? \n";
	cin >> x[0];
	cout << endl << "Please Enter Grade2 ? \n";
	cin >> x[1];
	cout << endl << "Please Enter Grade3 ? \n";
	cin >> x[2];
}
int printarf(int x[3]) {
	return (x[0] + x[1] + x[2]) / 3;

}
int main()
{
	 int x[3];
	readarf(x);
	cout << "*************************************\n\n";
	cout << "The AVG of the grades is: " << printarf(x);
	
}