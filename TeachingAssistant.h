#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H
#include "Staff.h"
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

//======CLASS TEACHING ASSITANT=========
class TeachingAssistant : public Staff, public Student {
    private:
        int workingHours;
    public:
        TeachingAssistant(string name, int memberid,double cgpa,double salary, AccessCard accessCard, int workingHours);
        void gradeAssignment(int score);
        void gradeAssignment(string letterGrade);
        void displayRole() const override;
};
#endif