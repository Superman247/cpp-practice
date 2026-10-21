#include<iostream>
#include<string>

using namespace std;

enum color{red,blue,black,purple};
enum contact{phone,email};
enum sex{male,female};

struct Person {

	string Name;
	string ctiy;
	string country;
	
	
	enum color;
	
	enum contact;
	enum sex;


};

int main() {

	Person P1, P2, P3;

	cout << "Please insert the following:\nNAME,CITY,COUNTRY,AND COLOR\n";
	cout << "Name: ";
	cin >> P1.Name;
	cout << "\n\nCity: ";
	cin >> P1.ctiy;
	cout << "\n\nCountry: ";
	cin >> P1.country;

	cout << "\nPlease insert the following:\nNAME,CITY,COUNTRY,AND COLOR\n";
	cout << "\nName: ";
	cin >> P2.Name;
	cout << "\n\nCity: ";
	cin >> P2.ctiy;
	cout << "\n\nCountry: ";
	cin >> P2.country;

	cout << "\nPlease insert the following:\nNAME,CITY,COUNTRY,AND COLOR\n";
	cout << "Name: ";
	cin >> P3.Name;
	cout << "\n\nCity: ";
	cin >> P3.ctiy;
	cout << "\n\nCountry: ";
	cin >> P3.country;


	cout << "\nPerson 1 info: " << P1.Name << "\t\t" << P1.ctiy << "\t\t" << P1.country << "\t\t" << color::purple << endl;
		cout << "\nPerson 2 info: " << P2.Name << "\t\t" << P2.ctiy << "\t\t" << P2.country << "\t\t" << color::red << endl;
	cout << "\nPerson 3 info: " << P3.Name << "\t\t" << P3.ctiy << "\t\t" << P3.country << "\t\t" << color::black << endl;


	cout << "\nThank you for your service.(;" << endl;


	return 0;
}