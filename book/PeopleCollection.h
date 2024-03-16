// PeopleCollection.h
#ifndef PEOPLECOLLECTION_H
#define PEOPLECOLLECTION_H

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

#endif