#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int D, H, M, S, R;

	cout << "This program is designed to calculate how much DAYS,HOURS,MINUTES,AND SECONDS is in your seconds.\n";
	cout << "Please insert how much seconds: ";
	cin >> S;
	D = 24 * pow(60, 2);
	H = pow(60, 2);
	M = 60;

	D = S / D;

	D = floor(D);

	R = S % D;

	H = floor(S / H);

	R = S % H;

	M = floor(S / M);

	R = S % M;

	S = R;

	cout << round(D) << " : " << round(H) << " : " << round(M) << " : " << round(S) << endl;

	return 0;

}