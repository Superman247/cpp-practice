#include<iostream>

using namespace std;


void readuser(int& x)
{

	cout << "Please enter a number: "<<endl;

		cin >> x;

}


void printanswer()
{

	int x= 0;
	int sum= 0;
	readuser(x);
	while (x != -99)
	{
	
			sum += x;

			readuser(x);
		
	}

	cout << "The sum of your numbers is: " << sum<<endl;



}






int main() {
	cout << "This program will calculate the sum of all the numbers you will enter. :)\n" <<"NOTE \" ENTER -99 IF YOU WANT THE SUM\""<<endl;

	printanswer();


}