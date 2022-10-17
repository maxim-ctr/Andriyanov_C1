#include "Andriyanov_student.h"
#include <iostream>
using namespace std;

void Andriyanov_student::setAttributes() {
	cout << "Введите имя: " << std::endl;
	cin >> this->name;
	cout << "Введите возраст: " << std::endl;
	cin >> this->age;
}

void Andriyanov_student::showAttributes() {
	cout << "Имя :" << this->name << endl;
	cout << "Возраст: " << this->age << endl;
}

void Andriyanov_student::Load(std::fstream& file) {
	file >> this->name;
	file >> this->age;
}

void Andriyanov_student::Save(std::fstream& file) {
	file << this->name << std::endl;
	file << this->age << std::endl;
}
