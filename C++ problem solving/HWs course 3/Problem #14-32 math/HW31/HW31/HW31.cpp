#include<iostream>
using namespace std;

int main()
{
	int L, M, T;
	cout << "This Program will caculate how much month you need to pay off your loads.\n";

	cout << "Please insert the amount of money you need: " << endl;
	cin >> L;

	cout << "\nplease insert the mounthly payment: \n";

	cin >> M;

	T = L / M;

	cout << "You will be able to finish paying off your loan in \n\n" << T << " Months." << endl;

	return 0;

}