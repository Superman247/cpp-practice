#include<iostream>
#include<string>
using namespace std;

int main()

{

	string Name ;
	cout << "please type in your name: \n";
	cin >> Name;
	
	unsigned short int Age ;
	cout << "Please type in your age: \n";
	cin >> Age;
	
	string City ;
	cout << "What city do you curruntly live in: \n";
	cin >> City;

	string Country ;
	cout << "What country do you live in: \n";
	cin >> Country;
	
	unsigned short int Monthly_Salary ;
	cout << "Please type in your monthly salary: \n";
	cin >> Monthly_Salary;
	
	
	
	char Gender ;
	cout << "What is your gender M/F: \n";
	cin >> Gender;
	

	bool Married ;
	cout << "If you are married type 1, And if you're not type 0\n";
	cin >> Married;
	
	unsigned short int Yearly_Salary = Monthly_Salary * 12;


	
		cout << "\n\n*************************************" << endl;
		
		cout << "Name: " << Name << "." << endl;
		
		cout << "Age  : " << Age << "Years.\n";
		
		cout << "City  : " << City << "." << endl;
	
		cout << "Country: " << Country << ".\n";
		
		cout << "Monthly Salary  :" << Monthly_Salary << endl;
	
		cout << "Yearly Salary: " << Yearly_Salary << "\n";
		
		cout << "Gender: " << Gender << endl;
	
		cout << "Married : " << Married << "\n";
		cout << "*************************************" << endl;


	

}