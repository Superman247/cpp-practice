#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    short int a;
    cout << "This program is designed to calculate your number to the power 2 then 3 then 4.\n";
    cout << " Please type in you number: ";
    cin >> a;
    cout << "Your number to the power 2 is : " << round(pow(a,2))  << endl;
    cout << "Your number to the power 3 is : " << round(pow(a, 3)) << "\n";
    cout << "Your number to the power 4 is : " << round(pow(a, 4)) << endl;

    return 0;
}

