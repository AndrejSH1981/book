// Association.h
#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Human.h"

class Association {
private:
    Student student;
    Teacher teacher;
    Human human;

public:
    Association(const Student& s, const Teacher& t, const Human& c) : student(s), teacher(t), human(c) {}

    void displayAssociationInfo();
};
