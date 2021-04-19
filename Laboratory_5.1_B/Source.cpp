#include <iostream>
#include "Rational.h"
#include <exception>
#include <stdexcept>
#include "Exception.h"

using namespace std;

int main()
{
	Rational l, r, D;
	bool Result;

	do
	{
		try
		{
			Result = true;
			l.setA(0);
			l.setB(0);
			r.setA(0);
			r.setB(0);
			l.Read();
			l.Display();
			r.Read();
			r.Display();
		}
		catch (bad_exception& e)
		{
			Result = false;
			cerr << e.what() << endl;
		}
		catch (invalid_argument e)
		{
			Result = false;
			cout << e.what() << endl;
		}
		catch (Exception& e)
		{
			Result = false;
			cout << e.what() << endl;
		}
	} while (!Result);

	double x = l.value();
	cout << " " << endl;
	cout << "value = " << x << endl;
	cout << " " << endl;
	cout << "Add operation:" << endl;
	cout << "add = ( " << D.add(l, r) << " , " << D.add_2(l, r) << " )" << endl << endl;
	cout << "Subtraction operation:" << endl;
	cout << "sub = ( " << D.sub(l, r) << " , " << D.sub_2(l, r) << " )" << endl << endl;
	cout << "Multiplication operation:" << endl;
	cout << "mul = ( " << D.mul(l, r) << " , " << D.mul_2(l, r) << " )" << endl << endl;

	cin.get();
	return 0;
}