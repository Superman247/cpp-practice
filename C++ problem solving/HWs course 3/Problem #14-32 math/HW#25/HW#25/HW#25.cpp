#include <iostream>
using namespace std;
int main()
{
    short int a;
    cout << "This program is designed to calculate your number to the power 2 then 3 then 4.\n";
    cout << " Please type in you number: ";
    cin >> a;
    cout << "Your number to the power 2 is : " << a * a << endl;
    cout << "Your number to the power 3 is : " << a * a * a << "\n";
    cout << "Your number to the power 4 is : " << a * a * a * a << endl;

    return 0;
}

