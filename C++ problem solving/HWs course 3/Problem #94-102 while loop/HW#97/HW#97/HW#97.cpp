#include<iostream>

using namespace std;

unsigned int readuser(int& x) {

	

	cout << "please insert a number to print it's factorial: ";
	cin >> x;
	return x;
}

void printfactorial() {

	int x = 0;
	cout << readuser(x);

	int i = x ;
	int fact = 1;
	while (i > 0){
		
		fact = fact * i;

		i--;
}
	cout << "The factorial of your number is : " <<  fact << endl;
	
}


int main() {

	printfactorial();

	return 0;
}