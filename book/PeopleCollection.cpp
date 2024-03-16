// PeopleCollection.cpp
#include "PeopleCollection.h"
#include <iostream>

using namespace std;

void PeopleCollection::addPerson(Person* p) {
    people.push_back(p);
}

void PeopleCollection::saveToFile(const string& filename) {
    ofstream file("people.txt");
    if (file.is_open()) {
        for (Person* p : people) {
            file << "- Имя:" << p->name << ", возраст: " << p->age << ", инф./тел: " << p->inf << "\n";
            p->displayInfo();
        }
        file.close();
        wcout << L"=В файл записано=" << endl;
    }
    else {
        wcout << L"=Не получилось записать в файл=" << endl;
    }
}