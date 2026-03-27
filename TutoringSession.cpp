#include "TutoringSession.h"

TutoringSession:: TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student):
    sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student) {

}

double TutoringSession::getDuration() {
    return durationMinutes;
}

void TutoringSession::displaySession() {
    cout << "Tutoring Session ID: " << sessionID << ", Duration: " << durationMinutes << " minutes" << endl;
    cout << "Teaching Assistant: " << ta->getName() << " (ID: " << ta->getMemberID() << ")" << endl;
    cout << "Student: " << student->getName() << " (ID: " << student->getMemberID() << ")" << endl;
}

TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    double totalDuration = this->durationMinutes + other.durationMinutes;
    return TutoringSession(0, totalDuration, this->ta, this->student);
}

bool operator>(TutoringSession s1, TutoringSession s2) {
    return s1.getDuration() > s2.getDuration();
}