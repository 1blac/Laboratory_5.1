#pragma once
#pragma once
#include <string>
#include <iostream>
#include "Object.h"
using namespace std;
class Rational : public Object
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

	operator string() const;
	friend ostream& operator << (ostream& out, const Rational& s);
	friend istream& operator >> (istream& in, Rational& s);

	~Rational(void);

};

