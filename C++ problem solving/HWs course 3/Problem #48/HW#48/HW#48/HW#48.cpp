#include<iostream>
#include<string>
using namespace std;

int main() {

	string st1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;
	//stod (string to double)
	double double_st1 = stod(st1);
	cout << double_st1 << endl;
	//stof (string to float)

	
	float float_st1 = stof(st1);
	cout << float_st1 << endl;
	//stof (string to float)

	int int_st1 = stoi(st1);
	cout << int_st1 << endl;
	//stoi (string to integer)
	
		
		
	
		
		string SN2 = to_string(N2);
		cout << SN2 << endl;
		//to_string (Convert numbers to string)

		string SN3 = to_string(N3);
		
		cout << SN3 << endl;
		//to_string (Convert numbers to string)

		int IIN3 = (int)N3;
		//convert float and double into integer (implesite conversion)
		cout << IIN3 << endl;
		int IN3 = int(N3);
		cout << IN3 << endl;
	

	return 0;

}