// Human.cpp
#include "Human.h"
#include <iostream>

using namespace std;

void Human::displayInfo() {
    wcout << L"���: ";
    cout << name;
    wcout << L", �������: ";
    cout << age;
    wcout << L", ���./���.: ";
    cout << inf << endl;
}
