#include<iostream>

using namespace std;

void Printsum()
{
	int x, y;
	cin >> x >> y;
	cout<<"*************************************************\n" << x + y << endl;

}

int Sumxy()
{
	int x, y;
	cin >> x >> y;
	return x * y;
}


int main() {


	Printsum();

	cout << "*************************************************\n" << Sumxy();

	return 0;

}