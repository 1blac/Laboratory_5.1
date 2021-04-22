#include "Man.h"
#include "Student_private.h"
#include <sstream>
#include <windows.h>
#include "Exception.h"

using namespace std;
HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);

void Student_private::Init(string name, int age, int weight, string gender, int yearOFstudy)
{
	Man::Init(name, age, weight, gender); // виклик базового метода
	setYearOFstudy(yearOFstudy);
}
void Student_private::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	Man::Display(); // виклик базового метода
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student_private::Read()
{
	string name;
	int age;
	int weight;
	string gender;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "weight = ? "; cin >> weight;
	cout << "gender = ? "; cin >> gender;

	int yearOFstudy;
	cout << endl;
	cout << "yearOFstudy = ? "; cin >> yearOFstudy;
	Init(name, age, weight, gender, yearOFstudy);
}
Student_private::Student_private(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
	: Man(name, age, weight, gender), yearOFstudy(yearOFstudy) // виклик базового конструктора
{}
Student_private::Student_private(const Student_private& s)
	: Man(s) // виклик базового конструктора
{
	yearOFstudy = s.yearOFstudy;
}
Student_private& Student_private::operator = (const Student_private& s)
{
	Man::operator = (s); // виклик базового присвоєння
	yearOFstudy = s.yearOFstudy;
	return *this;
}
ostream& operator << (ostream& out, const Student_private& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Student_private& s) throw(invalid_argument, bad_exception, Exception, const char*)
{
	string name;
	int age;
	int weight;
	string gender;
	SetConsoleTextAttribute(Console, 7);
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "age = ? "; in >> age;
	if (age < 16 || age > 100)
	{
		SetConsoleTextAttribute(Console, 12);
		throw Exception("Exception");
	}
	cout << "weight = ? "; in >> weight;
	if (weight < 40)
	{
		SetConsoleTextAttribute(Console, 12);
		throw invalid_argument("Invalid_argument");
	}
	if (weight > 400)
	{
		SetConsoleTextAttribute(Console, 12);
		throw bad_exception();
	}
	cout << "gender = ? "; in >> gender;
	s.setName(name);
	s.setAge(age);
	s.setWeight(weight);
	s.setGender(gender);

	int yearOFstudy;
	cout << endl;
	cout << "yearOFstudy = ? "; in >> yearOFstudy;
	if (yearOFstudy < 1 || yearOFstudy > 5)
	{
		SetConsoleTextAttribute(Console, 12);
		throw "Exception";
	}
	s.setYearOFstudy(yearOFstudy);
	return in;
}
Student_private::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return Man::operator string() + ss.str(); // виклик базового метода
}
bool Student_private::setChangeYearOFstudyPlus(int value)
{
	if (yearOFstudy + value > 5)
	{
		cout << " " << endl;
		return false;
	}
	else
	{
		yearOFstudy += value;
		return true;
	}
}
Student_private& Student_private::operator ++ ()
{
	++yearOFstudy;
	return *this;
}
Student_private& Student_private::operator -- ()
{
	--yearOFstudy;
	return *this;
}
Student_private Student_private::operator ++ (int)
{
	Student_private s(*this);
	yearOFstudy++;
	return s;
}
Student_private Student_private::operator -- (int)
{
	Student_private s(*this);
	yearOFstudy--;
	return s;
}
Student_private::~Student_private(void)
{}
