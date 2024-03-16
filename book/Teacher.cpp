// Teacher.cpp
#include "Teacher.h"
#include <iostream>

using namespace std;

void Teacher::displayInfo() {
    wcout << L"Имя: ";
    cout << name;
    wcout << L", Возраст: ";
    cout << age;
    wcout << L", Инф./тел.: ";
    cout << inf << endl;
}
