#include "Andriyanov_student.h"
#include <iostream>
using namespace std;

void Andriyanov_student::setAttributes() {
	cout << "������� ���: " << std::endl;
	cin >> this->name;
	cout << "������� �������: " << std::endl;
	cin >> this->age;
}

void Andriyanov_student::showAttributes() {
	cout << "��� :" << this->name << endl;
	cout << "�������: " << this->age << endl;
}

void Andriyanov_student::Load(std::fstream& file) {
	file >> this->name;
	file >> this->age;
}

void Andriyanov_student::Save(std::fstream& file) {
	file << this->name << std::endl;
	file << this->age << std::endl;
}
