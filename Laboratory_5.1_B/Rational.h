#pragma once
#include <string>
#include <iostream>

using namespace std;

class Rational
{
public:
	double a, b;
public:

	void Init(double a, double b);
	void Read();
	void Display();
	double getA() { return a; }
	double getB() { return b; }
	void setA(double value);
	void setB(double value);
	double value();

	Rational();
	Rational(const double a, const double b);
	Rational(const Rational& m);
	Rational& operator = (const Rational& m);

	double add(Rational& l, Rational& r);
	double add_2(Rational& l, Rational& r);
	double sub(Rational& l, Rational& r);
	double sub_2(Rational& l, Rational& r);
	double mul(Rational& l, Rational& r);
	double mul_2(Rational& l, Rational& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const Rational& s);
	friend istream& operator >> (istream& in, Rational& s);

	~Rational(void);

};
