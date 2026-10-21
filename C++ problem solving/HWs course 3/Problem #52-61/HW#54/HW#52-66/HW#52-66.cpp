#include<iostream>
#include<string>
#include<cmath>

using namespace std;


void swap(int& x, int& y)
{
	int z=0;
	z = x;
	x = y;
	y = z;
	cout << x << y;
	
}


int main() {

	
	int x, y;
	cin >> x >> y;
	swap(x, y); 

}



