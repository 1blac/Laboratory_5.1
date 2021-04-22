#include "Man.h"
#include "Student.h"
#include <sstream>
#include <windows.h>
#include "Exception.h"

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Student::Init(string name, int age, int weight, string gender, int yearOFstudy)
{
	Man::Init(name, age, weight, gender); // виклик базового метода
	setYearOFstudy(yearOFstudy);
}
void Student::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	Man::Display(); // виклик базового метода
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student::Read()
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
Student::Student(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
	: Man(name, age, weight, gender), yearOFstudy(yearOFstudy) // виклик базового конструктора
{}
Student::Student(const Student& s)
	: Man(s) // виклик базового конструктора
{
	yearOFstudy = s.yearOFstudy;
}
Student& Student::operator = (const Student& s)
{
	Man::operator = (s); // виклик базового присвоєння
	yearOFstudy = s.yearOFstudy;
	return *this;
}
ostream& operator << (ostream& out, const Student& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Student& s) throw(invalid_argument, bad_exception, Exception, const char*)
{
	string name;
	int age;
	int weight;
	string gender;
	SetConsoleTextAttribute(hConsole, 7);
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "age = ? "; in >> age;
	if (age < 16 || age > 100)
	{
		SetConsoleTextAttribute(hConsole, 12);
		throw Exception("Exception");
	}
	cout << "weight = ? "; in >> weight;
	if (weight < 40)
	{
		SetConsoleTextAttribute(hConsole, 12);
		throw invalid_argument("Invalid_argument");
	}
	if (weight > 400)
	{
		SetConsoleTextAttribute(hConsole, 12);
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
		SetConsoleTextAttribute(hConsole, 12);
		throw "Exception";
	}
	s.setYearOFstudy(yearOFstudy);
	return in;
}
Student::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return Man::operator string() + ss.str(); // виклик базового метода
}
Student& Student::operator ++ ()
{
	++yearOFstudy;
	return *this;
}
Student& Student::operator -- ()
{
	--yearOFstudy;
	return *this;
}
Student Student::operator ++ (int)
{
	Student s(*this);
	yearOFstudy++;
	return s;
}
Student Student::operator -- (int)
{
	Student s(*this);
	yearOFstudy--;
	return s;
}
Student::~Student(void)
{}