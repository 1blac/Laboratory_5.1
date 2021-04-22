#pragma once
#include "Rational.h"
class Rational_public :public Rational
{
public:

	void Init(double a, double b);
	void Read();
	Rational_public(const double a, const double b);
	Rational_public(const Rational_public& m);
	Rational_public& operator=(const Rational& m);
	void Display();
	using Rational::getA;
	using Rational::getB;
	using Rational::setA;
	using Rational::setB;

	operator string() const;
	friend ostream& operator << (ostream& out, const Rational_public& s);
	friend istream& operator >> (istream& in, Rational_public& s);

	double add(Rational& l, Rational& r);
	double add_2(Rational& l, Rational& r);
	double sub(Rational& l, Rational& r);
	double sub_2(Rational& l, Rational& r);
	double mul(Rational& l, Rational& r);
	double mul_2(Rational& l, Rational& r);

	Rational_public& operator ++ ();
	Rational_public& operator -- ();
	Rational_public operator ++ (int);
	Rational_public operator -- (int);

};

