// Teacher.cpp
#include "Teacher.h"
#include <iostream>

using namespace std;

void Teacher::displayInfo() {
    wcout << L"���: ";
    cout << name;
    wcout << L", �������: ";
    cout << age;
    wcout << L", ���./���.: ";
    cout << inf << endl;
}
