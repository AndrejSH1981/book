// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

using namespace std;

class Student : public Person {

public:
    Student(const string& n, int a, const string& i) : Person(n, a, i) {}

    void displayInfo() override;
};

#endif
