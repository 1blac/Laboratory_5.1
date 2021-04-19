#include "Rational.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <windows.h>
#include "Exception.h"

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Rational::Display()
{
	cout << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
}
void Rational::Init(double A, double B)
{
	a = A;
	b = B;
}
void Rational::Read() throw(invalid_argument, bad_exception, Exception)
{
	double A, B;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Input complex value:" << endl;
	cout << " a = "; cin >> A;
	if (A < 0 || A >= 50)
	{
		SetConsoleTextAttribute(hConsole, 12);
		throw Exception("Exception");
	}
	cout << " b = "; cin >> B;
	if (B < 0 || B >= 50)
	{
		SetConsoleTextAttribute(hConsole, 12);
		throw bad_exception();
	}
	if (A == 13 || B == 13)
	{
		SetConsoleTextAttribute(hConsole, 12);
		
		throw invalid_argument("Invalid_argument");
	}
	Init(A, B);
}
Rational::Rational()
	: a(0), b(0)
{}
Rational::Rational(const double a, const double b)
	: a(a), b(b)
{}
Rational::Rational(const Rational& m)
	: a(m.a), b(m.b)
{}
Rational& Rational::operator = (const Rational& m)
{
	this->a = m.a;
	this->b = m.b;
	return *this;
}
Rational::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Rational& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Rational& s)
{

	double a;
	double b;
	cout << endl;
	cout << "a = ? "; in >> a;
	cout << "b = ? "; in >> b;
	s.setA(a);
	s.setB(b);
	return in;
}
void Rational::setA(double value)
{
	a = value;
}
void Rational::setB(double value)
{
	b = value;
}
double Rational::add(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) + (r.a * l.b);
	return tmp;
}
double Rational::add_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational::sub(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) - (r.a * l.b);
	return tmp;
}
double Rational::sub_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational::mul(Rational& l, Rational& r)
{
	double tmp = l.a * r.a;
	return tmp;
}
double Rational::mul_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational::value()
{
	return 1. * a / b;
}
Rational::~Rational(void)
{}
