#include<iostream>
#include<string>
#include<cmath>

using namespace std;


struct contact {


	unsigned short int phone_number;
	string email;

};

struct adress{

	string City;
	string Country;
	

};

struct ID {

	string Name;

	unsigned int Age;
	short int Monthly_salary;
	short int Yearly_salary;
	adress Location;

	char Gender;
	bool married;
	contact info;
	
};




int main()
{
	cout << "***********************************************\n";
	ID P1,P2,P3;
	P1.Yearly_salary = 1000;
	cout << P1.Yearly_salary;
	cout << "Age: \n";
	cin >> P1.Age;
	cout << "Maried: \n";
	cin >> P1.married;
	cout << "City: \n";
	cin >> P1.Location.City;
	cout << "phone number: \n";
	cin >>  P1.info.phone_number;
	

	cout<<"First Guy: " << P1.Age << "\t" << P1.married << "\t" << P1.Location.City << "\t" << P1.info.phone_number<<"\n\n";

	cout << "Age: \n";
	cin >> P2.Age;
	cout << "Maried: \n";
	cin >> P2.married;
	cout << "City: \n";
	cin >> P2.Location.City;
	cout << "phone number: \n";
	cin >> P2.info.phone_number;


	cout << "Second Guy: " << P2.Age << "\t" << P2.married << "\t" << P2.Location.City << "\t" << P2.info.phone_number<<endl<<endl;

	cout << "Age: \n";
	cin >> P3.Age;
	cout << "Maried: \n";
	cin >> P3.married;
	cout << "City: \n";
	cin >> P3.Location.City;
	cout << "phone number : \n";
	cin >> P3.info.phone_number;


	cout <<"Third Guy: " << P3.Age << "\t" << P3.married << "\t" << P3.Location.City << "\t" << P3.info.phone_number;



	cout << "\n\n***********************************************";
	return 0;

}