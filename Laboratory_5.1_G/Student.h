#pragma once
#include "Man.h"
class Student :public Man
{
private:
	int yearOFstudy;
public:
	int getYearOFstudy() const { return yearOFstudy; }
	void setYearOFstudy(int yearOFstudy) { this->yearOFstudy = yearOFstudy; }
	using Man::getName;
	using Man::getAge;
	using Man::getWeight;
	using Man::getGender;
	using Man::setName;
	using Man::setAge;
	using Man::setWeight;
	using Man::setGender;
	void Init(string name, int age, int weight, string gender, int yearOFstudy);
	void Display() const;
	void Read();
	Student(const string name = "", const int age = 0, const int weight = 0, const string gender = "", const int yearOFstudy = 0);
	Student(const Student& s);
	Student& operator = (const Student& s);
	friend ostream& operator << (ostream& out, const Student& s);
	friend istream& operator >> (istream& in, Student& s);
	operator string () const;
	Student& operator ++ ();
	Student& operator -- ();
	Student operator ++ (int);
	Student operator -- (int);
	~Student(void);
};

