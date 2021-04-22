#pragma once
#include "Man.h"
class Student_private :private Man
{
private:
	int yearOFstudy;
public:
	int getYearOFstudy() const { return yearOFstudy; }
	void setYearOFstudy(int yearOFstudy) { this->yearOFstudy = yearOFstudy; }
	bool setChangeYearOFstudyPlus(int);
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
	Student_private(const string name = "", const int age = 0, const int weight = 0, const string gender = "", const int yearOFstudy = 0);
	Student_private(const Student_private& s);
	Student_private& operator = (const Student_private& s);
	friend ostream& operator << (ostream& out, const Student_private& s);
	friend istream& operator >> (istream& in, Student_private& s);
	operator string () const;
	Student_private& operator ++ ();
	Student_private& operator -- ();
	Student_private operator ++ (int);
	Student_private operator -- (int);
	~Student_private(void);
};
