// Student.cpp
#include "Student.h"
#include <iostream>

using namespace std;

void Student::displayInfo() {
    wcout << L"Имя: ";
    cout << name;
    wcout << L", Возраст: ";
    cout << age;
    wcout << L", Инф./тел.: ";
    cout << inf << endl;
}
