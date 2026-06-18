#ifndef STUDENT_NODE_H
#define STUDENT_NODE_H

#include <string>
using namespace std;

class StudentNode {
public:
    string studentName;
    StudentNode* next;

    StudentNode(string name);
};

#endif