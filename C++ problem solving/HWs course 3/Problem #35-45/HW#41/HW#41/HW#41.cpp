#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b,c,p,g,t;
    cout << "This program is designed to calculate the area of the circle described around the arbitrary triangle.\n";
    cout << "please insert the triangle  three legs length.";
    cout << "\nlength 1: ";
    cin >> a;
    cout << "\nlength 2: ";
    cin >> b;
    cout << "\nlength 3: \n";
    cin >> c;

    p = (a + b + c) / 2;
    
    g = (a*b*c) / (4 * sqrt(p*(p-a)*(p-b)*(p-c)));
    t = 3.14 * pow(g, 2);

    cout << "The area of your circle is: " << round(t) << endl;
    return 0;
}

