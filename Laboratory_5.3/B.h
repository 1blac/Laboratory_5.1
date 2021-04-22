#pragma once
#include "A.h"
#include <iostream>

using namespace std;

class B : public A
{
	int y;
public:
	B(int x = 0, int y = 0) : A(x) { this->y = y; }

	B& operator = (const B& b)
	{
		if (this == &b) { throw b; }
	}
};


