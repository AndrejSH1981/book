// Person.h
#pragma once
#include <string>

using namespace std;

class Person {

public:
    string name;
    int age;
    string inf;
    Person(const string& n, int a, const string& i) : name(n), age(a), inf(i) {}

    virtual void displayInfo() = 0;
};

