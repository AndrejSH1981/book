// Human.h
#ifndef HUMAN_H
#define HUMAN_H

#include "Person.h"

using namespace std;

class Human : public Person {

public:
    Human(const string& n, int a, const string& i) : Person(n, a, i) {}

    void displayInfo() override;
};

#endif
