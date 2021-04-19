#pragma once
#include <iostream>

using namespace std;

class Exception
{
	string message;
public:
	Exception(const string msg) : message(msg) { }
	string what() const { return message; }
};

