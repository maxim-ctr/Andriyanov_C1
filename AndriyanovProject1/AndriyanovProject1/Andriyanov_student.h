#pragma once
#include <fstream>
class Andriyanov_student
{
public:
	char name[50];
	int age;
	void setAttributes();
	void showAttributes();
	void Load(std::fstream&);
	void Save(std::fstream&);
};
