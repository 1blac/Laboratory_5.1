#pragma once
#include <iostream>
#include <string>
using namespace std;

class LINE
{
private:
	double first, second, X;
public:
	LINE();
	LINE(double, double, double);
	LINE(const LINE&);
	~LINE();

	void SetFirst(double);
	void SetSecond(double);
	void SetX(double);

	double GetFirst() const;
	double GetSecond() const;
	double GetX() const;

	LINE& operator = (const LINE&);
	operator string() const;

	friend ostream& operator << (ostream&, const LINE&);
	friend istream& operator >> (istream&, LINE&);

	double function();

	LINE& operator ++();
	LINE& operator --();
	LINE operator ++(int);
	LINE operator --(int);
};