#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b;
    cout << "This program is designed to calculate the area of the circle inscribed in an Isosceles triangle.\n";
    cout << "please insert the triangle base and two legs length.";
    cout << "\nlength 1: ";
    cin >> a;
    cout << "\nlength 2: ";
    cin >> b;
    cout << "\nbase: \n";
    cin >> b;
    cout << "The area of your circle is: " << floor(3.14 * ((b * b) / 4) * ((2 * a - b) / (2 * a + b)));
    cout << endl;
    return 0;
}

