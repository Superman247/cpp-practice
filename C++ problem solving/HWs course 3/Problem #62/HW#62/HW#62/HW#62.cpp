#include<iostream>
#include<cmath>
#include<string>
using namespace std;

struct info {
	string name;
	short int age;
	string city;
	string country;
	float monthlySalary;
	float yearlySalary;
	char gender;
	bool married;
};

void inputinfo(info &info) {
	cout << "enter you name: ";
	cin >> info.name;
	cout << endl<<endl << "enter your age: ";
	cin >> info.age;
	cout << "\n\nenter the city you live in: ";
	cin >> info.city;
	cout << endl<<endl << "enter the country of resedence: ";
	cin >> info.country;
	cout << "\n\nenter the monthly salary: ";
	cin >> info.monthlySalary;
	cout << endl << endl << "enter you yearly salary: ";
	cin >> info.yearlySalary;
	cout << "\n\ninsert you gender [M] for male [F] fo female: ";
	cin >> info.gender;
	cout << endl << endl << "insert 1 if you are married and 0 if you are not: ";
	cin >> info.married;
	cout << "\n";
}

void printinfo(info info) {
	cout << "***********************************\n\n";
	cout << "Name: " << info.name << endl;
	cout <<"Age: " << info.age << "\n";
	cout << "City: " << info.city << endl;
	cout <<"Country: " << info.country << "\n";
	cout << "Monthly Salary: " << info.monthlySalary << endl;
	cout <<"Yearly Salary: " << info.yearlySalary << "\n";
	cout << "Gender: " << info.gender << endl;
	cout <<"Married: " << info.married << "\n";
	cout << "\n\n***********************************\n\n";
}

int main() 
{
	info P1, P2;
	inputinfo(P1);
	inputinfo(P2);
	cout << "\nP1 INFO : \n\n";
	printinfo(P1);
	cout << "\nP2 INFO : \n\n";
	printinfo(P2);

}