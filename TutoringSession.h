#ifndef TUTORING_SESSION_H
#define TUTORING_SESSION_H
#include "TeachingAssistant.h"
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

//======CLASS TUTORING SESSION=========
class TutoringSession{
    private:
        int sessionID;
        double durationMinutes;
        TeachingAssistant* ta;
        Student* student;
    public:
        TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
        double getDuration();
        void displaySession();
        TutoringSession operator+(const TutoringSession& other);
};

//Non member function for comparing s1 and s2
bool operator>(TutoringSession s1, TutoringSession s2); 
#endif
