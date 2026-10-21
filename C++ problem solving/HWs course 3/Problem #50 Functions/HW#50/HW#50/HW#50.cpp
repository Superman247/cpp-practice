#include<iostream>
#include<string>

using namespace std;

void printH() {


	cout << "\n*\t*\n*\t*\n*********\n*\t*\n*\t*";

}

void printgoals() {
	cout << "\n\nI Love Programming!\n";
	cout << "I Promise to be the best eveloper ever!" << endl;
	cout << "I know it will take some time to practice, but I will achieve my goal\n";
	cout << "Best Regards." << endl << "Ayham Bawaneh.\n\n";




}
void printcube() {

	cout << "********\n" << "********\n" << "********\n" << "********\n\n"; 


}
void printinfo(){
	cout << "****************************************\n";
	cout << "Name: Ayham Bawaneh. ";
	
	cout << "\nAge: 21 Years. ";
	cout << "\nCity : Amman.";
	cout << "Country: Jordan" << endl;

	cout << "****************************************\n\n";
}

int main()
{
	printinfo();
	printcube();
	printgoals();
	printH();

	return 0;
}