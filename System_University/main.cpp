#include <iostream>
#include "UniversitySystem.h"

using namespace std;

int main() {
    UniversitySystem system;
    int choice;

    do {
        cout << "\n1- Add Subject\n";
        cout << "2- Display Subjects\n";
        cout << "3- Register Student\n";
        cout << "4- Display Students in Subject\n";
        cout << "5- Display Student Subjects\n";
        cout << "6- Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: system.addSubject(); break;
            case 2: system.displaySubjects(); break;
            case 3: system.registerStudent(); break;
            case 4: system.displayStudentsInSubject(); break;
            case 5: system.displayStudentSubjects(); break;
        }
    } while (choice != 6);
}