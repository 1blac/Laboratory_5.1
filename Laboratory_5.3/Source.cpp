#include <iostream>
#include "A.h"
#include "B.h"

using namespace std; 

int main()
{
	A a(1);
	B b(2, 3);
	try
	{
		//b = a;
		//a = b;
		a = a;
		cout << "Continue" << endl;
	}
	catch (A)
	{
		cout << "catch(A)" << endl;
		exit(1);
	}

	try
	{
		//b = b;
		cout << "Continue" << endl;
	}
	catch (B)
	{
		cout << "catch(B)" << endl;
		exit(1);
	}
	cout << "End" << endl;

	return 0;
}