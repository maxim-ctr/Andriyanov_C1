// AndriyanovProject1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Andriyanov_student.h"
#include "Andriyanov_group.h"
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывод
    setlocale(LC_ALL, "Rus"); // Подключение русского языка
    Andriyanov_group abc;

    while (true) {
        cout << "Размер: ";
        cout << abc.list.size() << endl;
        int command;

        cout << "1. Добавить студента" << endl
            << "2. Показать группу" << endl
            << "3. Загрузить группу" << endl
            << "4. Сохранить группу" << endl
            << "5. Очистить группу\n" << endl
            << "Выберите команду: ";
        cin >> command;
        switch (command) {

        case 1: {
            Andriyanov_student* student = new Andriyanov_student();
            student->setAttributes();
            abc.addStudent(*student);
            cout << endl;
            break;
        }
        case 2: {
            abc.showGroup();
            break;
        }
        case 3: {
            string fileName;
            cout << "Введите название файла: ";
            cin >> fileName;
            abc.loadFromFile(fileName);

            break;
        }
        case 4: {
            string fileName;
            cout << "Введите название файла: ";
            cin >> fileName;
            abc.saveInFile(fileName);
            break;
        }
        case 5: {
            abc.clear();
        }
        }
    }
}

