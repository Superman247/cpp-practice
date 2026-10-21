#include<iostream>
using namespace std;
struct info {

	string name;
	string city;
	short age;
	short salary;
};
void read(info& info)
{
	cout << "Please insert your name: \n";
	cin >> info.name;
	cout << "Please insert the city you live in: \n";
	cin >> info.city;
	cout << "Please type in your age: \n";
	cin >> info.age;
	cout << "Please enter the amount of salary: \n";
	cin >> info.salary;
}
void print(info info) 
{
	cout << "*******************************************\n";
	cout << "Name is: " << info.name << endl;
	cout << "City is: " << info.city << endl;
	cout << "Age is: " << info.age << endl;
	cout << "Salary is: " << info.salary << endl;
	cout << "*******************************************\n";
}
void readPeople(info people[2])
{
	read(people[0]);
	read(people[1]);
}
void printPeople(info people[2]) 
{
	cout << "*******************************************\n";
	print(people[0]);
	print(people[1]);
}

int main() {

	info people[2];

	readPeople(people);
	printPeople(people);

	return 0;
}