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

	//PreCondition: NA
	//PostCondition: copy data of the complex number 
	Complex(const Complex& obj)
	{
		realNumber = obj.realNumber;
		imaginaryNumber = obj.imaginaryNumber;
	}

	//PreCondition: input is type double
	//PostCondition: update realNumber 
	void setRealNumber(double n)
	{
		realNumber = n;
	}

	//PreCondition: input is type double
	//PostCondition: update imaginaryNumber 
	void setImaginaryNumber(double i)
	{
		imaginaryNumber = i;
	}

	//PreCondition: NA
	//PostCondition: return realNumber 
	double getRealNumber() const
	{
		return realNumber;
	}

	//PreCondition: NA
	//PostCondition: return imaginaryNumber 
	double getImaginaryNumber() const
	{
		return imaginaryNumber;
	}

	//PreCondition: input type Complex
	//PostCondition: overloaded + operator returns sum of two Complex number
	Complex operator + (const Complex& right)
	{
		Complex temp;

		temp.realNumber = realNumber + right.realNumber;
		temp.imaginaryNumber = imaginaryNumber + right.imaginaryNumber;
		return temp;
	}

	//PreCondition: input type Complex
	//PostCondition: overloaded - operator returns sub of two Complex number
	Complex operator - (const Complex& right)
	{
		Complex temp;

		temp.realNumber = realNumber - right.realNumber;
		temp.imaginaryNumber = imaginaryNumber - right.imaginaryNumber;
		return temp;
	}


	//PreCondition: input type Complex
	//PostCondition: overloaded * operator returns mul of two Complex number
	Complex operator * (const Complex& right)
	{
		Complex temp;

		temp.realNumber = (realNumber * right.realNumber) - (imaginaryNumber * right.imaginaryNumber);
		temp.imaginaryNumber = (realNumber * right.imaginaryNumber) + (imaginaryNumber * right.realNumber);
		return temp;
	}

	//PreCondition: input type Complex
	//PostCondition: overloaded * operator returns div of two Complex number
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

  
	//PreCondition: input type Complex
	//PostCondition: Overloaded == operator. Returns true if the current object is set to a value equal to that of right.

	bool operator == (const Complex& right)
	{
		bool status;

		if (realNumber == right.realNumber && imaginaryNumber == right.imaginaryNumber)
			status = true;
		else
			status = false;

		return status;
	}
             
	//PreCondition: input type Complex
	//PostCondition: Overloaded != operator. Returns false if the current object is set to a value equal to that of right.
	bool operator != (const Complex& right)
	{
		bool status;

		if (realNumber == right.realNumber && imaginaryNumber == right.imaginaryNumber)
			status = false;
		else
			status = true;

		return status;
	}

	//PreCondition: input ostream, input type Polynomial
	//PostCondition: Overloaded << operator. Gives cout the ability to directly display Complex objects. 

	friend ostream& operator<<(ostream& strm, const Complex& obj)
	{
		Complex temp = obj;
		if (temp != obj)
			strm << "ERROR!";
		else
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
		}

		return strm;
	}

};

#endif