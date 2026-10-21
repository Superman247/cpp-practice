#include <iostream>
using namespace std;

int circle(int x)
{


    return (3.14 * (x * x)) / 4;
}
int main()
{
    
    cout << "This program is designed to calculate the area of the Circle inscribed in a square.\n";
    int a;
    cout << "Please enter the value of A: ";
    cin >> a;
    int u = circle(a);
    cout << "The area of you circle is : " << u<< endl;
    return 0;
}

