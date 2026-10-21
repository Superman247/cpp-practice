#include<iostream>
using namespace std;

int main()
{
	float Penny, Nickel, Dime, Quarter, Dollar, Dcount;

	cout << "This program is designed to calculate your task time duation in seconds.\n";
	float D, H, M, S, k;
	cout << "Please insert how many days have you spent doing your task: ";
		cin >> D;
	cout << "\nPlease insert how many hours have you spent doing your task: ";
		cin >> H;
	cout << "\nPlease insert how many minutes have you spent doing your task: ";
		cin >> M;
	cout << "\nPlease insert how many seconds have you spent doing your task: ";
		cin >> S;
		cout << endl;
		k = 0;
		S = S * 1;
		M = M * 60;
		H = H * 60 * 60;
		D = D * 60 * 60 * 24;
		k = D + H + M + S;



		cout << "You have finished your task in : " << k << " Seconds.";
	return 0;

}