#include<iostream>
using namespace std;
void checkpass(short& x)
{
	cout << "Lets see if you passed :)\n";
	cout << "Please insert your grade:  \n";
	cin >> x;

}
void qualified(short x)
{
	if (x >= 50 ) {
		cout << "Congrats you passed :0" << endl;
	}
	else
		cout << "We are sorry you Faild :(" << endl;
}
int main() {
	short x;
	
	checkpass(x);
	qualified(x);

}