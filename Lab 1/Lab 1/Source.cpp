//------------------------------------
//				CIS215-402 LAB 1
//Author: Tyler Patrick
//Date Modified: 1/17/19
//Description: My first C++ Program. It does arithmetic on two numbers
//------------------------------------
#include <iostream>
using namespace std;

int main()
{
	cout << " +----------------------------------+" << endl;
	cout << " |            Number Fun!           |" << endl;
	cout << " |         By Tyler Patrick         |" << endl;
	cout << " +----------------------------------+" << endl;
	cout << " Enter a Number: "; // Asks User to enter a number
	int Numone; // First Variable Added
	int Numtwo; // Second Variable Added
	cin >> Numone; // Provides input for user to add variable
	cout << " Enter Another Number: "; // Asks User to enter a second Number
	cin >> Numtwo; // Provides input for user to add another variable
	int sum = Numone + Numtwo; // Gives the variable sum
	int diffrence = Numone - Numtwo; // Gives the variable diffrence
	int product = Numone * Numtwo; // Gives the variable product
	int intquotient = Numone / Numtwo; // Gives the variable intquotient
	float floatquotient = ((float)Numone) / ((float)Numtwo); // Gives the variable floatquotient
	cout << "Sum:            " << sum << endl; 
	cout << "Diffrence:      " << diffrence << endl;
	cout << "Product:        " <<  product << endl;
	cout << "Int Quotient:   " << intquotient << endl;
	cout << "Float Quotient: " << floatquotient << endl;
	system("PAUSE");
}




