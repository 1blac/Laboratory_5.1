#include "Rational_public.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

void Rational_public::Display()
{
	Rational::Display(); // виклик базового метода
}
void Rational_public::Init(double A, double B)
{
	Rational::Init(A, B); // виклик базового метода
}
void Rational_public::Read()
{
	double A, B;
	cout << "Input complex value:" << endl;
	cout << " a = "; cin >> A;
	cout << " b = "; cin >> B;
	Init(A, B);
}
Rational_public::Rational_public(const double a, const double b)
	: Rational(a, b) // виклик базового конструктора
{}
Rational_public::Rational_public(const Rational_public& m)
	: Rational(m) // виклик базового конструктора
{}
Rational_public& Rational_public::operator = (const Rational& m)
{
	Rational::operator = (m); // виклик базового присвоєння
	return *this;
}
Rational_public::operator string () const
{
	stringstream ss;
	return Rational::operator string() + ss.str(); // виклик базового метода
}
ostream& operator << (ostream& out, const Rational_public& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Rational_public& s)
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
double Rational_public::add(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) + (r.a * l.b);
	return tmp;
}
double Rational_public::add_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational_public::sub(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) - (r.a * l.b);
	return tmp;
}
double Rational_public::sub_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational_public::mul(Rational& l, Rational& r)
{
	double tmp = l.a * r.a;
	return tmp;
}
double Rational_public::mul_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
Rational_public& Rational_public::operator ++ ()
{
	++a;
	return *this;
}
Rational_public& Rational_public::operator -- ()
{
	--a;
	return *this;
}
Rational_public Rational_public::operator ++ (int)
{
	Rational_public s(*this);
	a++;
	return s;
}
Rational_public Rational_public::operator -- (int)
{
	Rational_public s(*this);
	a--;
	return s;
}