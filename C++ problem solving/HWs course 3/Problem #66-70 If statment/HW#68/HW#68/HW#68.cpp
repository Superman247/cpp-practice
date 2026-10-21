#include<iostream>
using namespace std;
void readHire(short& x, short& l,short& z)
{
	cout << "Lets see if you passed :)\n";
	cout << "Inset the first grade:  \n";
	cin >> x;
	cout << "Insert the second grade:  \n";
	cin >> l;
	cout << "Insert the third grade:  \n";
	cin >> z;
	
}
void qualified(short& x, short& l, short& z)
{
	unsigned short int AVG = (x + l + z) / 3;
	if (AVG >= 50) {
		cout << "Congrats you passed :0" << endl;
	}
	else
		cout << "We are sorry you failed :(" << endl;
}
int main() {
	
	short x; 
	short l;
	short z;

	readHire(x, l,z);
	qualified(x, l,z);

}