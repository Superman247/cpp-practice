#include<iostream>
using namespace std;
void readHire(short &x, bool &l)
{
	cout << "Lets hire a driver :)\n";
	cout << "How old are you: \n";
	cin >> x;
	cout << "Do you have a drivers license? 1 for yes 0 for no \n";
	cin >> l;
	
}
void qualified(short x, bool l)
{
	if (x >= 21 && l == 1) {
		cout << "Congrats you're Hired" << endl;
	}
	else
		cout << "We are sorry you are not qualified :(" << endl;
}
int main() {
	short x;
	bool y;
	readHire(x, y);
	qualified(x, y);

}