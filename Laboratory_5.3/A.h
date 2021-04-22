#pragma once

class A
{
	int x;
public:
	A(int x = 0) { this->x = x; }
	int GetX() { return x; }
	A& operator = (const A& a)
	{
		if(this == &a) { throw a; }
	}
};


