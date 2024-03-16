// UserInterface.cpp
#include "UserInterface.h"
#include <iostream>

using namespace std;

void UserInterface::displayMenu() {
    wcout << L"1. Добавить студента\n2. Добавить преподавателя\n3. Добавить человека\n4. Сохранить в файл\n5. Вызод" << endl;
}