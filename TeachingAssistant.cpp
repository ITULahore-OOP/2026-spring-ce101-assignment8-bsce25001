#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string name, int memberid,double cgpa,double salary, AccessCard accessCard, int workingHours)
    : UniversityMember(name, memberid), Staff(name, memberid, salary, accessCard), Student(name, memberid, cgpa), workingHours(workingHours)
{
}

void TeachingAssistant::gradeAssignment(int score) {
    cout << "Grading assignment with numeric score: " << score << "/100" << endl;
}

void TeachingAssistant::gradeAssignment(string letterGrade) {
    cout << "Grading assignment with letter grade: " << letterGrade << endl;
}

void TeachingAssistant::displayRole() const {
    cout << "Role: Teaching Assistant, Name: " << getName() << " (ID: " << getMemberID() << "), CGPA: " << getCGPA() << ", Salary: $" << getSalary() << ", Working Hours: " << workingHours << endl;
}

