#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "UniversityMember.h"
#include <string>
#include <iostream>
using namespace std;

//======CLASS DEPARTMENT=========
class Department{
    private:
        string departmentName;
        UniversityMember* members[50];
        int memberCount;
    public:
        Department(string departmentName);
        void addMember(UniversityMember* member);
        void displayAllRoles();

};
#endif