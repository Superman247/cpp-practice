#include<iostream>
using namespace std;
void readHire(short& x)
{
	cout << "Lets see if you passed :)\n";
	cout << "Inset the the age :  \n";
	cin >> x;

}
void qualified(short& x)
{

	if (x >18 && x<45 ) {
		cout << "Valid age :0" << endl;
	}
	else
		cout << "Invalid age :(" << endl;
}
int main() {

	short x;
	

	readHire(x);
	qualified(x);

}