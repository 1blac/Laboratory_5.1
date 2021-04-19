#pragma once
#include "Rational.h"
class Rational_private :private Rational
{
public:

	void Init(double a, double b);
	void Read();
	Rational_private(const double a, const double b);
	Rational_private(const Rational_private& m);
	Rational_private& operator=(const Rational& m);
	void Display();
	using Rational::getA;
	using Rational::getB;
	using Rational::setA;
	using Rational::setB;

	operator string() const;
	friend ostream& operator << (ostream& out, const Rational_private& s);
	friend istream& operator >> (istream& in, Rational_private& s);

	double add(Rational& l, Rational& r);
	double add_2(Rational& l, Rational& r);
	double sub(Rational& l, Rational& r);
	double sub_2(Rational& l, Rational& r);
	double mul(Rational& l, Rational& r);
	double mul_2(Rational& l, Rational& r);

	Rational_private& operator ++ ();
	Rational_private& operator -- ();
	Rational_private operator ++ (int);
	Rational_private operator -- (int);

};


