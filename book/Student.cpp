// Student.cpp
#include "Student.h"
#include <iostream>

using namespace std;

void Student::displayInfo() {
    wcout << L"���: ";
    cout << name;
    wcout << L", �������: ";
    cout << age;
    wcout << L", ���./���.: ";
    cout << inf << endl;
}
