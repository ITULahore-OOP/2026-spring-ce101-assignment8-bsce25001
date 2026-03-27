#include "Student.h"

Student::Student(string name, int memberid, double cgpa): UniversityMember(name, memberid), cgpa(cgpa) {

}

double Student::getCGPA() const {
    return cgpa;
}

void Student::updateCGPA(double newCgpa) {
    cgpa = newCgpa;
}

void Student::displayRole() const {
    cout << "Role: Student, Name: " << getName() << " (ID: " << getMemberID() << "), CGPA: " << cgpa << endl;
}