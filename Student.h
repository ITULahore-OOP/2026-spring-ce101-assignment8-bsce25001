#ifndef STUDENT_H
#define STUDENT_H
#include "UniversityMember.h"
#include <string>
#include <iostream>
using namespace std;

//======CLASS STUDENT=========
class Student : virtual public UniversityMember {
    private:
        double cgpa;
    public:
        Student(string name, int memberid, double cgpa);
        double getCGPA() const;
        void updateCGPA(double newCgpa);
        void displayRole() const override;
        
};
#endif