#include "Rational_private.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

void Rational_private::Display()
{
	Rational::Display(); // виклик базового метода
}
void Rational_private::Init(double A, double B)
{
	Rational::Init(A, B); // виклик базового метода
}
void Rational_private::Read()
{
	double A, B;
	cout << "Input complex value:" << endl;
	cout << " a = "; cin >> A;
	cout << " b = "; cin >> B;
	Init(A, B);
}
Rational_private::Rational_private(const double a, const double b)
	: Rational(a, b) // виклик базового конструктора
{}
Rational_private::Rational_private(const Rational_private& m)
	: Rational(m) // виклик базового конструктора
{}
Rational_private& Rational_private::operator = (const Rational& m)
{
	Rational::operator = (m); // виклик базового присвоєння
	return *this;
}
Rational_private::operator string () const
{
	stringstream ss;
	return Rational::operator string() + ss.str(); // виклик базового метода
}
std::ostream& operator << (ostream& out, const Rational_private& s)
{
	out << string(s);
	return out;
}
std::istream& operator >> (istream& in, Rational_private& s)
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
double Rational_private::add(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) + (r.a * l.b);
	return tmp;
}
double Rational_private::add_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational_private::sub(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) - (r.a * l.b);
	return tmp;
}
double Rational_private::sub_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational_private::mul(Rational& l, Rational& r)
{
	double tmp = l.a * r.a;
	return tmp;
}
double Rational_private::mul_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
Rational_private& Rational_private::operator ++ ()
{
	++a;
	return *this;
}
Rational_private& Rational_private::operator -- ()
{
	--a;
	return *this;
}
Rational_private Rational_private::operator ++ (int)
{
	Rational_private s(*this);
	a++;
	return s;
}
Rational_private Rational_private::operator -- (int)
{
	Rational_private s(*this);
	a--;
	return s;
}