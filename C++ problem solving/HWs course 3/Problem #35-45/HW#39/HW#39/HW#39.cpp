#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    short int l;
    cout << "This program is designed to calculate the area of the cicle along the circumference.\n";
    cout << "please insert the value of the circumference: \n";
    cin >> l;
    cout << "The area of your circle is: \n" << floor((l * l) / (4 * 3.14)) << endl;


    return 0;
}

