#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2, str3,strprint;
	cout << "Please enter string 1: ";
	getline(cin, str1);
	cout << "\n\nPlease enter string 2: ";
	cin >> str2;
	cout << "\n\nPlease enter string 3: "<<endl;
	cin >> str3;
	cout << "\n*******************************\n\n";
	cout << str1 << endl;
	cout << "Characters at 0,2,4,7 are: " << str1[0] << str1[2] << str1[4] << str1[7] << endl;
	strprint = str2 + str3;
	cout << strprint << "\n";

	 int str22 = stoi(str2) + stoi(str3);

	 cout << str22 << endl;





	return 0;
}