#pragma once
#include <vector>
#include "Andriyanov_student.h"
#include <iostream>
using namespace std;
class Andriyanov_group
{
public:
	vector <Andriyanov_student*> list;
	void addStudent(Andriyanov_student&);
	void showGroup();
	void saveInFile(string& fileName);
	void loadFromFile(string& fileName);
	void clear();
};
