// optionOne.h

#ifndef OPTION_ONE_LOCK
#define OPTION_ONE_LOCK
#include <iostream>
#include "Complex.h"
#include "input.h"
using namespace std;

//PreCondition: input number type Complex, and option type int
//PostCondition: Set new value for the Complex number
void newComplexNumber(Complex& number, int option)
{

	string text;
	if (option == 1)
		text = "C1= ";
	else
		text = "C2= ";
	double n = inputDouble("\n\t\tEnter a number (double value) for the real part of " + text);
	number.setRealNumber(n);
	double i = inputDouble("\n\t\tEnter a number (double value) for the imaginary part of " + text);
	number.setImaginaryNumber(i);
	cout << "\n\t\t" << text << number << endl;

}

//PreCondition: input two Complex number
//PostCondition: Verify condition operators (== and !=) of two complex number 
void verifyConditionOperators(Complex C1, Complex C2)
{
	bool status1 = C1 == C2;
	bool status2 = C1 != C2;

	cout << "\n\t\tC1 == C2 -> (" << C1 << ") == (" << C2 << ") ? " << std::boolalpha << status1 << endl;
	cout << "\t\tC1 != C2 -> (" << C1 << ") != (" << C2 << ") ? " << std::boolalpha << status2 << endl;
}

//PreCondition: input two Complex number
//PostCondition: Evaluate arithmatic operators (+, - , * and /) of two complex number 
void evaluateArithmaticOperators(Complex C1, Complex C2)
{
	Complex C3 = C1 + C2;
	Complex C4 = C2 - C1;
	Complex C5 = C1 * C2;
	Complex C6 = C2 / C1;

	cout << "\n\t\tAddition\t: C1 + C2 -> (" << C1 << ") + (" << C2 << ") = " << C3 << endl;
	cout << "\t\tSubtraction\t: C2 - C1 -> (" << C2 << ") - (" << C1 << ") = " << C4 << endl;
	cout << "\t\tMultiplication\t: C1 * C2 -> (" << C1 << ") * (" << C2 << ") = " << C5 << endl;
	cout << "\t\tDivision\t: C2 / C1 -> (" << C2 << ") / (" << C1 << ") = " << C6 << endl;

}
//PreCondition: input three Complex number
//PostCondition: Evaluate steps in (3 * (C1 + C2) / 7) / (C2 - C1 / 9) != C3 ? 
void evaluateOperators(Complex C1, Complex C2, Complex C3)
{

	Complex C4 = C1 + C2;
	Complex C5 = C4 * 3;
	Complex numerator = C5 / 7;
	Complex C6 = C1 / 9;
	Complex denominator = C2 - C6;
	Complex C7 = numerator / denominator;
	bool status = C7 != C3;

	cout << "\n\t\t C1 = " << C1 << endl;
	cout << "\t\t C2 = " << C2 << endl;
	cout << "\t\t C3 = " << C3 << endl;

	cout << "\n\t\tEvaluating expression..." << endl;
	cout << "\t\t\t(3 * (C1 + C2) / 7) / (C2 - C1 / 9) != (" << C3 << ") ? " << endl;
	cout << "\n\t\tStep #1: (3*(" << C4 << ")/7) / ((" << C2 << ") - (" << C6 << "))!= (" << C3 << ") ? " << endl;
	cout << "\t\tStep #2: ((" << C5 << ")/7) / (" << denominator << ") != (" << C3 << ") ? " << endl;
	cout << "\t\tStep #3: (" << numerator << ") / (" << denominator << ") != (" << C3 << ") ? " << endl;
	cout << "\t\tStep #4: (" << C7 << ") != (" << C3 << ") ? " << endl;
	cout << "\t\tStep #5: " << std::boolalpha << status << endl;

}


#endif