#pragma once
#ifndef Fraction_H
#define Fraction_H
class Fraction
{
	int numerator;
	int denominator;
	int num1;
	int num2;
	int den1;
	int den2;
	


public:
	Fraction();
	~Fraction();
	void setNumerator(int a);
	void setDenominator(int b);
	int getNumerator(void);
	int getDenominator(void);
	int getNum2(void);
	int getDenom2(void);
	void display();
	double add(void);
	double subtract(void);
	double multiply(void);
	double divide(void);
	void getFractions(void);
	int findLCD(void);

};
#endif

