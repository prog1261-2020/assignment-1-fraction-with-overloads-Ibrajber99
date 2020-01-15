#pragma once
#include <iostream>
#include <sstream>
#include <istream>
#include<ostream>
class Fraction//Class Declaration
{


public:
	//Numerator and denomenator
	int _numerator;
	int _denomenator;
	//Making Class constructors
	Fraction();
	Fraction(int numerator);
	Fraction(int numerator, int denomenator);
	/****************************************************
	 Logical Operators in Class  for Operator Overloading
	*****************************************************/

	bool operator==(const Fraction& rhs)const;
	bool operator!=(const Fraction& rhs)const;
	bool operator>(const Fraction& rhs)const;
	bool operator<(const Fraction& rhs)const;
	bool operator>=(const Fraction& rhs)const;
	bool operator<=(const Fraction& rhs)const;


	/****************************************************
			Arithmatic operators for the class
	*****************************************************/
	Fraction& operator+(Fraction& rhs);
	Fraction& operator+=(Fraction& rhs);
	Fraction& operator-(Fraction& rhs);
	Fraction& operator-=(Fraction& rhs);
	Fraction& operator*(Fraction& rhs);
	Fraction& operator*=(Fraction& rhs);
	Fraction& operator/(Fraction& rhs);
	Fraction& operator/=(Fraction& rhs);


	/****************************************************
	Friend functions for stream insertion and extraction
	*****************************************************/
	friend std::ostream& operator<<(std::ostream& os, const Fraction& vec);
	friend std::istream& operator>>(std::istream& is,  Fraction& vec);

};

/********************************************************************************************
//Logical operators Global/Fiend function so we can compare Data types with user-defined type
*********************************************************************************************/
bool operator>(int x, Fraction& rhs);
bool operator<(int x, Fraction& rhs);


/********************************************************************************************
Arethmetic operators Global/Fiend function so we can compare Data types with user-defined type
*********************************************************************************************/
Fraction operator+(int x, Fraction& rhs);
Fraction operator+=(int x, Fraction& rhs);
Fraction operator+=(Fraction& rhs, int x);
Fraction operator+(Fraction& rhs, int x);


/********************************************************************************************
Arethmetic operators Global/Fiend function so we can compare Data types with user-defined type
*********************************************************************************************/
Fraction operator-(int x, Fraction& rhs);
Fraction operator-=(int x, Fraction& rhs);
Fraction operator-=(Fraction& rhs, int x);
Fraction operator-(Fraction& rhs, int x);

/********************************************************************************************
Arethmetic operators Global/Fiend function so we can compare Data types with user-defined type
*********************************************************************************************/
Fraction operator*(int x, Fraction& rhs);
Fraction operator*(Fraction& rhs, int x);
Fraction operator*=(int x, Fraction& rhs);
Fraction operator*=(Fraction& rhs, int x);

/********************************************************************************************
Arethmetic operators Global/Fiend function so we can compare Data types with user-defined type
*********************************************************************************************/
Fraction operator/(int x, Fraction& rhs);
Fraction operator/(Fraction& rhs, int x);
Fraction operator/=(int x, Fraction& rhs);
Fraction operator/=(Fraction& rhs, int x);


