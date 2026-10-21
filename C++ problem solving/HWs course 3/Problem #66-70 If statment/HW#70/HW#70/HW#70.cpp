#include<iostream>
using namespace std;
void readHire(unsigned short int &PIN)
{
	cout << "Check your balance. :)\n";
	cout << "Inset your PIN code:  \n";
	cin >> PIN;


}
void qualified(unsigned short int &PIN)
{
	
	if (PIN == 1234 ) {
		cout << "Balance: 7500" << endl;
	}
	else
		cout << "wrong Pin :(" << endl;
}
int main() {

	unsigned short int x;


	readHire(x);
	qualified(x);

}