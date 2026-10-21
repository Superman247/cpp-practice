#include<iostream>
using namespace std;

void readuser(int& x,int& P)
{
	cout << "Please insert a number : " << endl;
	cin >> x;
	cout << "\nFor what power do you want this number?  \n";
	cin >> P;
}

void printanswer()
{
	int x;
	int P;
	readuser(x,P);
	int m=1;
	int i = 0;

	if (P==0) {
		cout << m;
		}
	else
	{

		while (i < P)
		{
			m *= x;

			i++;
		}
		cout << "Your number is " << x << "To the power " << P << " it become\'s " << m;
	}
}

int main()
{
	printanswer();


	return 0;
}