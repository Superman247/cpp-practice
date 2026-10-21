#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float d;
    cout << "This program is designed to calculate the area of the Circle through the diameter.\n";
    cout << "Please insert the length of the diameter: ";
    cin >> d;

    cout << "The area of your circle is : " << ceil((3.14 * (d * d))) / 4;
    return 0;
}