#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	short int N, M;
	cout << "Please insert the number and the power you want to apply to it:\n";
	cout << "Number: ";
	cin >> N;
	cout << "\nPower: ";
	cin >>M;

	cout << "Your output is :  " << pow(N, M)<<endl;
	return 0;
}