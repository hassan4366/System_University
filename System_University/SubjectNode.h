#ifndef SUBJECT_NODE_H
#define SUBJECT_NODE_H

#include <string>
#include "StudentNode.h"
using namespace std;

class SubjectNode {
public:
    string subjectCode, subjectName;
    StudentNode* studentList;
    SubjectNode* next;

    SubjectNode(string code, string name);
};

#endif