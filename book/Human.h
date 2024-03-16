// Human.h
#pragma once
#include "Person.h"

using namespace std;

class Human : public Person {

public:
    Human(const string& n, int a, const string& i) : Person(n, a, i) {}

    void displayInfo() override;
};

