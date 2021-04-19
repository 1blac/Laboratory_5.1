#pragma once
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Pair
{
private:
	double l, r;
public:
	Pair();
	Pair(double, double);
	Pair(const Pair&);
	~Pair();

	double GetL() const { return l; }
	double GetR() const { return r; }

	void SetL(double l) { this->l = l; };
	void SetR(double r) { this->r = r; };

	operator string() const;
	friend ostream& operator << (ostream&, const Pair&);

	Pair& operator = (const Pair&);
	friend bool operator > (Pair& a, Pair& b);
	friend bool operator < (Pair& a, Pair& b);
	friend bool operator == (Pair& a, Pair& b);
};

