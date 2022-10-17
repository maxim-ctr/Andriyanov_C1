#include "Andriyanov_group.h"
#include <string>

void Andriyanov_group::addStudent(Andriyanov_student& student) {


	//cout << "Ссылка на объект: ";
	//cout << &student << endl;

	list.push_back(&student);
}

void Andriyanov_group::showGroup() {
	cout << endl << "Список студентов: " << "\n\n";
	for (Andriyanov_student* student : list) {
		//cout << "Ссылка на объект: ";
		//cout << student << endl;
		student->showAttributes();
		cout << endl;
	}
}

void Andriyanov_group::loadFromFile(string& fileName) {
	fstream file;
	Andriyanov_student* student;
	file.open(fileName + ".txt", ios::in);
	char c;
	while (file.is_open()) {
		file.get(c);
		if (file.peek() == EOF)
			break;
		file.unget();
		Andriyanov_student* student;
		student = new Andriyanov_student();
		student->Load(file);
		this->addStudent(*student);

	}
	file.close();
}

void Andriyanov_group::saveInFile(string& fileName) {
	fstream file;
	file.open(fileName + ".txt", ios::out);
	for (Andriyanov_student* student : list)
	{
		student->Save(file);
	}
	file.close();
}


void Andriyanov_group::clear()
{
	for (Andriyanov_student* student : this->list)
		delete student;
	this->list.clear();
}