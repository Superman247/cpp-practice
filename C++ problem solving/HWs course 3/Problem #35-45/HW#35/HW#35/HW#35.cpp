#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "This program will calculate for you the area of a rectangle through the diagonal and side area of rectangle.";
	cout << "\npelase Insert the values of diagonal and side area length: \n";
	cout << "Diagonal: ";
	int D, S,Area;
	cin >> D;
	cout << "\nSide area: ";
	cin >> S;
	Area = S * (sqrt(pow(D, 2) - (S, 2)));

	cout << "The area of the your rectangular is : " << Area << endl;
	return 0;

}