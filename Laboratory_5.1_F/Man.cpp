#include "Man.h"
#include <sstream>
#include "Exception.h"
void Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "weight = " << weight << endl;
	cout << "gender = " << gender << endl;
}
void Man::Init(string name, int age, int weight, string gender)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setGender(gender);
}
void Man::Read()
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
	Init(name, age, weight, gender);
}
Man::Man()
	: name(""), age(0), weight(0), gender("")
{}
Man::Man(const string name, const string gender)
	: name(name), gender(gender)
{}
Man::Man(const int age, const int weight) throw(Exception , invalid_argument, bad_exception)
{
	if (age < 16 || age > 100)
		throw Exception("Exception");
	else if (weight < 40)
		throw invalid_argument("Invalid_argument");
	else if (weight > 400)
		throw bad_exception();
	this->age = age;
	this->weight = weight;
}
Man::Man(const string name, const int age, const int weight, const string gender)
	: name(name), age(age), weight(weight), gender(gender)
{}
Man::Man(const Man& m)
	: name(m.name), age(m.age), weight(m.weight), gender(m.gender)
{}
Man& Man::operator = (const Man& m)
{
	this->name = m.name;
	this->age = m.age;
	this->weight = m.weight;
	this->gender = m.gender;
	return *this;
}
Man::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "age = " << age << endl;
	ss << "weight = " << weight << endl;
	ss << "gender = " << gender << endl;
	return ss.str();
}
Man::~Man(void)
{}
