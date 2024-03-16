// PeopleCollection.h
#pragma once
#include "Person.h"
#include <vector>
#include <fstream>

using namespace std;

class PeopleCollection {
private:
    vector<Person*> people;

public:
    void addPerson(Person* p);
    void saveToFile(const string& filename);
};
