#pragma once
#include <string>
#include <iostream>
#include "Object.h"
using namespace std;
class Man :public Object
{
private:
	string name;
	int age;
	int weight;
	string gender;
public:
	string getName() const { return name; }
	int getAge() const { return age; }
	int getWeight() const { return weight; }
	string getGender() const { return gender; }
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	void setWeight(int weight) { this->weight = weight; }
	void setGender(string gender) { this->gender = gender; }
	void Init(string name, int age, int weight, string gender);
	void Display() const;
	void Read();
	Man();
	Man(const string name, const string gender);
	Man(const int age, const int weight);
	Man(const string name, const int age, const int weight, const string gender);
	Man(const Man& m);
	Man& operator = (const Man& m);
	friend ostream& operator << (ostream& out, const Man& m);
	friend istream& operator >> (istream& in, Man& m);
	operator string () const;
	~Man(void);
};

