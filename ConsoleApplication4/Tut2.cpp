#include "Fraction.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;


int main()
{
	char choice = 'g';

	Fraction obj;
	//List of options for user to choose
	while (choice != 'E')
	{
		cout << "\n";
		cout << "\n";
			cout << "Please select an option: \n";
		cout << "A. Addition of two fractions \n";
		cout << "B. Subtraction of two fractions \n";
		cout << "C. Multiplication of two fractions \n";
		cout << "D. Division of two fractions \n";
		cout << "E. End\n";
		cout << "\n"<<"\n";
		cin >> choice;
		choice = toupper(choice);


		//Ask user to enter two fractions using getFractions() method

		switch (choice)
		{
		case 'A':
			obj.getFractions();
			
			cout << "The sum of : " << obj.add() << "\n";

			break;

		case 'B': 	obj.getFractions();
			cout << "The difference is: " << obj.subtract()<<"\n";
			break;

		case 'C':	obj.getFractions();
			cout << "The product is: " << obj.multiply() << "\n";
			break;

		case 'D':	obj.getFractions();
			cout << "The quotient is:  " << obj.divide() << "\n";
			break;

		case 'E':
			break;


		}












	};

	system("pause");
};