#include <iostream>
#include<cmath>
using namespace std;
int main()
{

    cout << "This program is designed to calculate the area of the Circle inscribed in a square.\n";
    int a;
    cout << "Please enter the value of A: ";
    cin >> a;

    cout << "The area of you circle is : " << ceil((3.14 * (a * a)) / 4) << endl;
    return 0;
}

