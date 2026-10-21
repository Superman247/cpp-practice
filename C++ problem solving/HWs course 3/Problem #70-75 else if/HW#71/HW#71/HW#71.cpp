#include<iostream>
using namespace std;
void readHire(short& x, short& l, short& z)
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
	if (AVG >=90 || AVG==100) {
		cout << "Congrats you passed and your grade is: A :0" << endl;
	}
	else if (AVG >= 80 || AVG == 89) {
		cout << "Congrats you passed and your grade is: B :0" << endl;
	}
	else if (AVG >= 70 || AVG == 79) {
		cout << "Congrats you passed and your grade is: C :0" << endl;
	}
	else if (AVG >= 60 || AVG == 69) {
		cout << "Congrats you passed and your grade is: D :0" << endl;
	}
	else if (AVG >= 50 || AVG == 59) {
		cout << "Congrats you passed and your grade is: E :0" << endl;
	}
	else
		cout << " you got F :(" << endl;
}
int main() {

	short x;
	short l;
	short z;

	readHire(x, l, z);
	qualified(x, l, z);

}