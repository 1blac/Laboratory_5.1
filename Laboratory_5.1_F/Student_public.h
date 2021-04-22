#pragma once
#include "Man.h"
class Student_public :public Man
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
	Student_public(const string name = "", const int age = 0, const int weight = 0, const string gender = "", const int yearOFstudy = 0);
	Student_public(const Student_public& s);
	Student_public& operator = (const Student_public& s);
	bool setChangeYearOFstudyPlus(int);
	friend ostream& operator << (ostream& out, const Student_public& s);
	friend istream& operator >> (istream& in, Student_public& s);
	operator string () const;
	Student_public& operator ++ ();
	Student_public& operator -- ();
	Student_public operator ++ (int);
	Student_public operator -- (int);
	~Student_public(void);
};
