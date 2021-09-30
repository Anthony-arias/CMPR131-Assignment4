// Specification file for the Complex class
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

// The Complex class holds the real and the imaginary number 
// expressed in the form a + bi.

class Complex
{
private:
	double realNumber;        // To hold the real number
	double imaginaryNumber;      // To hold the imaginary number

public:
	// Constructor
	Complex(double n = 0.0, double i = 0.0)
	{
		realNumber = n;
		imaginaryNumber = i;
	}

	// Copy constructor
	Complex(const Complex& obj)
	{
		realNumber = obj.realNumber;
		imaginaryNumber = obj.imaginaryNumber;
	}

	// Mutator functions
	void setRealNumber(double n)
	{
		realNumber = n;
	}

	void setImaginaryNumber(double i)
	{
		imaginaryNumber = i;
	}

	// Accessor functions
	double getRealNumber() const
	{
		return realNumber;
	}

	double getImaginaryNumber() const
	{
		return imaginaryNumber;
	}

	// Overloaded operator functions
	// Overloaded + operator.
	Complex operator + (const Complex& right)
	{
		Complex temp;

		temp.realNumber = realNumber + right.realNumber;
		temp.imaginaryNumber = imaginaryNumber + right.imaginaryNumber;
		return temp;
	}

	// Overloaded - operator.
	Complex operator - (const Complex& right)
	{
		Complex temp;

		temp.realNumber = realNumber - right.realNumber;
		temp.imaginaryNumber = imaginaryNumber - right.imaginaryNumber;
		return temp;
	}

	// Overloaded * operator.
	Complex operator * (const Complex& right)
	{
		Complex temp;

		temp.realNumber = (realNumber * right.realNumber) - (imaginaryNumber * right.imaginaryNumber);
		temp.imaginaryNumber = (realNumber * right.imaginaryNumber) + (imaginaryNumber * right.realNumber);
		return temp;
	}

	// Overloaded / operator.
	Complex operator / (const Complex& right)
	{
		Complex temp;
		double a = realNumber;
		double b = imaginaryNumber;
		double c = right.realNumber;
		double d = right.imaginaryNumber;
		temp.realNumber = ((a * c) + (b * d)) / ((c * c) + (d * d));
		temp.imaginaryNumber = ((b * c) - (a * d)) / ((c * c) + (d * d));
		return temp;
	}

	// Overloaded == operator. Returns true if the current object 
	// is set to a value equal to that of right.                  

	bool operator == (const Complex& right)
	{
		bool status;

		if (realNumber == right.realNumber && imaginaryNumber == right.imaginaryNumber)
			status = true;
		else
			status = false;

		return status;
	}

	// Overloaded != operator. Returns false if the current object 
	// is set to a value equal to that of right.                  

	bool operator != (const Complex& right)
	{
		bool status;

		if (realNumber == right.realNumber && imaginaryNumber == right.imaginaryNumber)
			status = false;
		else
			status = true;

		return status;
	}

	// Overloaded << operator. Gives cout the ability to     
	// directly display Complex objects. 

	friend ostream& operator<<(ostream& strm, const Complex& obj)
	{
		if (obj.realNumber == 0)
		{
			if (obj.imaginaryNumber == 0)
				strm << obj.realNumber;
			else
			{
				if (obj.imaginaryNumber == -1)
					strm << "-i";
				else
				{
					if (obj.imaginaryNumber == 1)
						strm << "i";
					else
						strm << obj.imaginaryNumber << "i";
				}
			}

		}
		else
		{
			if (obj.imaginaryNumber < 0)
			{
				if (obj.imaginaryNumber == -1)
					strm << obj.realNumber << " - i";
				else
					strm << obj.realNumber << " " << obj.imaginaryNumber << "i";
			}
			else
			{
				if (obj.imaginaryNumber == 0)
					strm << obj.realNumber;
				else
				{
					if (obj.imaginaryNumber == 1)
						strm << obj.realNumber << " + i";
					else
						strm << obj.realNumber << " + " << obj.imaginaryNumber << "i";
				}
			}
		}

		return strm;
	}

};

#endif