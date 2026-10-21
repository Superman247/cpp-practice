#include <iostream>
#include<cmath>
using namespace std;
int circle(int a, int b) {


    return 3.14 * (pow(b,2)/4) * ((2 * a - b) / (2 * a + b));
}
int main()
{
    int a, b;
    cout << "This program is designed to calculate the area of the circle inscribed in an Isosceles triangle.\n";
    cout << "please insert the triangle base and two legs length.";
    cout << "\nlength 1: ";
    cin >> a;

    cout << "\nbase: \n";
    cin >> b;
    cout << "The area of your circle is: " << circle(8, 6);
    return 0;
}

