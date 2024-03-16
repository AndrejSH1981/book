// Teacher.h
#pragma once
#include "Person.h"

using namespace std;

class Teacher : public Person {

public:
    Teacher(const string& n, int a, const string& i) : Person(n, a, i) {}

    void displayInfo() override;
};

