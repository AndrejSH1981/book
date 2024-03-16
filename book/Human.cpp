// Human.cpp
#include "Human.h"
#include <iostream>

using namespace std;

void Human::displayInfo() {
    wcout << L"Имя: ";
    cout << name;
    wcout << L", Возраст: ";
    cout << age;
    wcout << L", Инф./тел.: ";
    cout << inf << endl;
}
