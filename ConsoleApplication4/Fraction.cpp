#include "Fraction.h"

#include<iostream>
using namespace std;

Fraction::Fraction()
{
	numerator = 1;
	denominator = 1;

};


Fraction::~Fraction()
{
};

/*
void setNumerator(int a);
void setDenominaor(int b);
int getNumerator(void);
int getDenominator(void);
*/

void Fraction::setNumerator(int a)
{
	numerator = a;
};

void Fraction::setDenominator(int b)
{
	denominator = b;
};

int Fraction::getNumerator()
{
	return numerator;
};


double Fraction::add()
{
	double sum=0;

	sum = ((num1*den2)+(num2*den1));
	sum = (sum) / (den1*den2);
	return sum;
};


double Fraction::subtract()
{
	double diff=0;
	diff = ((num1*den2) - (num2*den1));
	diff = diff / (den1*den2);
	return diff;

};


double Fraction::multiply()
{
	double product=0;
	product = (num1)*(num2);
	product = product / (den1*den2);
	return product;
};

double Fraction::divide()
{
	double quo=0;
	double top = num1*den2;
	double bottom = den1*num2;
	quo = top/bottom;


	return quo;

};//divide


int Fraction::getNum2()
{
	return num2;
};


int Fraction::getDenom2()
{
	return den2;
};


void Fraction::getFractions()
{
	

	cout << "Please enter the numerator of fraction 1:       ";
	cin >> num1;
	cout << "\n";
	cout << "Please enter the denominator of fraction 1:     ";
	cin >> den1;
	if (den1 == 0)
	{
		cout << "Denominator cannot be zero";
	}
	while (den1 == 0)
	{
		cout << "Please enter the denominator of fraction 1:";
		cin >> den1;
	}
	cout << "\n";
	cout << "Please enter the numerator of fraction 2:      ";
	cin >> num2;
	cout << "\n";
	cout << "Please enter the denominator of fraction 2:    ";
	cin >> den2;

	if (den2 == 0)
	{
		cout << "Denominator cannot be zero";
	}

	while (den2 == 0)
	{
		cout << "\n";
		cout << "Please enter the denominator of fraction 2:";
		cin >> den2;
	}





};//getFractions



int Fraction::findLCD()
{
	int lcd = -1;
	

	return lcd ;
};

