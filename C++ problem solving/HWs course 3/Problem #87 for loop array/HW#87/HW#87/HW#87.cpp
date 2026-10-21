#include <iostream>
#include<string>
using namespace std;

struct info
{
	string first_name;
	int age;
	int phone_number;
	string last_name;
};

void readinfo(info& Person) {
	cout << "Enter the first name:" << endl;
	cin >> Person.first_name;
	cout << "Enter your last name: \n";
	cin >> Person.last_name;
	cout << "How old are you: " << endl;
	cin >> Person.age;
	cout << "Insert you phone number please: \n";
	cin >> Person.phone_number;
	cout << "\n\n";
}
void Printinfo(info Person) {

	cout << "\n****************************************************\n";
	cout << "First Name: "<<Person.first_name<<endl;
	cout << "Last Name: "<<Person.last_name<<endl;
	cout << "Age: "<<Person.age << endl;
	cout << "Phone Number: " << Person.phone_number<<endl;
	cout << "\n****************************************************\n";


}
void readperson(info Person[100], int personNUM) {

	cout << "How many persons do you want to add:" << endl;
	cin >> personNUM;
	for (int i = 0; i <= personNUM - 1; i++)
	{
		cout << "Please enter persons " << i + 1 << " info: \n";
		readinfo(Person[i]);
	}
	 
}
void printperson(info Person[100], int personNUM) {

	for (int i = 0; i <= personNUM - 1; i++) {
		cout << "Person's " << i + 1 << " info: " << endl;
		Printinfo(Person[i]);

	}

}

int main() {

	cout << "\n****************************************************\n";
	info Person[100];
	int personNUM = 1;
	readperson(Person, personNUM);
	printperson(Person, personNUM);




	return 0;
}