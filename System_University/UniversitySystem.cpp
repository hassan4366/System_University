#include <iostream>
#include "UniversitySystem.h"

using namespace std;

// Constructors
StudentNode::StudentNode(string name) {
    studentName = name;
    next = nullptr;
}

SubjectNode::SubjectNode(string code, string name) {
    subjectCode = code;
    subjectName = name;
    studentList = nullptr;
    next = nullptr;
}

UniversitySystem::UniversitySystem() {
    head = nullptr;
}
void UniversitySystem::addSubject() {
    string code, name;
    cout << "Enter subject code = ";
    cin >> code;
    cin.ignore();
    cout << "Enter subject name = ";
    getline(cin, name);

    // check duplicate
    SubjectNode* check = head;
    while (check) {
        if (check->subjectCode == code) {
            cout << "Subject already exists!\n";
            return;
        }
        check = check->next;
    }

    SubjectNode* newSubject = new SubjectNode(code, name);

    if (!head)
        head = newSubject;
    else {
        SubjectNode* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newSubject;
    }

    cout << "Subject added successfully\n";
}
void UniversitySystem::registerStudent() {
    if (!head) {
        cout << "No subjects available\n";
        return;
    }

    string code;
    cout << "Enter subject code = ";
    cin >> code;

    SubjectNode* temp = head;
    while (temp && temp->subjectCode != code)
        temp = temp->next;

    if (!temp) {
        cout << "Subject not found\n";
        return;
    }

    string name;
    cout << "Enter student name = ";
    cin.ignore();
    getline(cin, name);

    // check duplicate
    StudentNode* s = temp->studentList;
    while (s) {
        if (s->studentName == name) {
            cout << "Student already registered!\n";
            return;
        }
        s = s->next;
    }

    StudentNode* newStudent = new StudentNode(name);

    if (!temp->studentList)
        temp->studentList = newStudent;
    else {
        StudentNode* cur = temp->studentList;
        while (cur->next)
            cur = cur->next;
        cur->next = newStudent;
    }

    cout << "Student registered successfully\n";
}
UniversitySystem::~UniversitySystem() {
    SubjectNode* sub = head;
    while (sub) {
        StudentNode* s = sub->studentList;
        while (s) {
            StudentNode* tmp = s;
            s = s->next;
            delete tmp;
        }
        SubjectNode* tmpSub = sub;
        sub = sub->next;
        delete tmpSub;
    }
}