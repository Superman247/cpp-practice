#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "this program will calculate the area of a circle by typing in half of the diameter\n";
	cout << "Half the diameter R : ";
	int R, Area;
	cin >> R;
	Area = 3.14 * pow(R, 2);
	cout << "\nThis is the area of your circle: " << Area << endl;

	return 0;

}