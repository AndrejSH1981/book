// book.cpp
#include "Student.h"
#include "Teacher.h"
#include "Human.h"
#include "Association.h"
#include "PeopleCollection.h"
#include "UserInterface.h"
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "rus");

    string name_stud = " ";
    int age_stud = 0;
    string studentInf_stud = " ";

    string name_teach = " ";
    int age_teach = 0;
    string teacheInf_inf = " ";

    string name_inf = " ";
    int age_inf = 0;
    string human_inf = " ";
    

    PeopleCollection collection;

    bool Running = true;
    if (Running) {
    label1:
        UserInterface::displayMenu();
        int choice;
        cin >> choice;

        if (choice == 1) {
            string name, studentInf;
            int age;
            wcout << L"Введите имя студента (англ.): ";
            cin >> name;
            wcout << L"Введите возраст студента: ";
            cin >> age;
            wcout << L"Введите инф./тел. студента (англ.): ";
            cin >> studentInf;
            cout << studentInf << endl;
            collection.addPerson(new Student(name, age, "студент " + studentInf));
            name_stud = name;
            age_stud = age;
            studentInf_stud = studentInf;
            goto label1;;
        }
        if (choice == 2) {
            string name, teacheInf;
            int age;

            cout << "Введите имя преподавателя (англ.): ";
            cin >> name;
            cout << "Введите возраст преподавателя: ";
            cin >> age;
            cout << "Введите инф./тел. преподователя (англ.): ";
            cin >> teacheInf;
            
            collection.addPerson(new Teacher(name, age, "преподаватель " + teacheInf));
            name_teach = name;
            age_teach = age;
            teacheInf_inf = teacheInf;
            goto label1;
        }
        if (choice == 3) {
            string name, inf;
            int age;
            cout << "Введите имя (англ.): ";
            cin >> name;
            cout << "Введите возраст: ";
            cin >> age;
            cout << "Введите инф./тел. (англ.): ";
            cin >> inf;
            collection.addPerson(new Human(name, age, inf));
            name_inf = name;
            age_inf = age;
            human_inf = inf;
            goto label1;
        }
        if (choice == 4) {
            collection.saveToFile("textBookPeople.txt");
            goto label1;
        }
        if (choice >= 5){
            Running = false;
            goto label0;
        }

    }
label0:
    wcout << L"\nконец\n" << endl;

    Student student(name_stud, age_stud, studentInf_stud);
    Teacher teacher(name_teach, age_teach, teacheInf_inf);
    Human human(name_inf, age_inf, human_inf);
    Association association(student, teacher, human);
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
