#include "Line.h"
#include <iostream>
#include <stdexcept>
#include <exception>
#include "Exception.h"

using namespace std;

int main()
{

	LINE y;
	bool Result;

	do
	{
		try
		{
			Result = true;
			cin >> y;
		}
		catch (bad_exception& y)
		{
			Result = false;
			cerr << y.what() << endl;
		}
} while (!Result);
	y.function();
	cout << " Formula: y = A * x + B" << endl;
	cout << " y = " << y.function() << endl;

	

	return 0;
}