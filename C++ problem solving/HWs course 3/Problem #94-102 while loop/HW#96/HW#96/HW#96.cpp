#include<iostream>

using namespace std;



void printnumbers()
{
	int x;
	cout << "Please enter the number you want : ";
	cin >> x;


	int sum =0;

	int i = 0;
	while (i <= x)
	{
		

		if (i % 2 != 0)
			sum = sum + i;
		i++;


	}

	cout << "The sum of your odd number is : " << sum;
}

int main()
{
	
	

	printnumbers();
		cout << endl;
	return 0;
	


}