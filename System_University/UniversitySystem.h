#ifndef UNIVERSITY_SYSTEM_H
#define UNIVERSITY_SYSTEM_H

#include "SubjectNode.h"

class UniversitySystem {
private:
    SubjectNode* head;

public:
    UniversitySystem();

    void addSubject();
    void displaySubjects();
    void registerStudent();
    void displayStudentsInSubject();
    void displayStudentSubjects();

    ~UniversitySystem();
};

#endif