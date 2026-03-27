#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "Department.h"
#include "TutoringSession.h"

using namespace std;

int main() {
    // 1) Create multiple AccessCard, Student, Staff, and TeachingAssistant objects
    AccessCard card1("AC-101", 1);
    AccessCard card2("AC-102", 2);
    AccessCard card3("AC-103", 3);

    Student student1("Ali", 2001, 3.4);
    Student student2("Sara", 2002, 3.8);

    Staff staff1("Mr. Khan", 3001, 50000.0, card1);
    Staff staff2("Ms. Noor", 3002, 62000.0, card2);

    TeachingAssistant ta1("Hina", 4001, 3.9, 18000.0, card3, 20);
    TeachingAssistant ta2("Usman", 4002, 3.7, 16000.0, card2, 15);

    // 2) Add them to Department and display roles (run-time polymorphism)
    Department cs("Computer Science");
    cs.addMember(&student1);
    cs.addMember(&student2);
    cs.addMember(&staff1);
    cs.addMember(&staff2);
    cs.addMember(&ta1);
    cs.addMember(&ta2);

    cout << "--- Department Roles ---" << endl;
    cs.displayAllRoles();
    cout << endl;

    // 3) Compile-time polymorphism: call both overloaded gradeAssignment methods
    cout << "--- Compile-Time Polymorphism ---" << endl;
    ta1.gradeAssignment(92);
    ta1.gradeAssignment("A");
    cout << endl;

    // 4) Create two sessions and show + and > operator overloading
    TutoringSession session1(1, 45.0, &ta1, &student1);
    TutoringSession session2(2, 30.0, &ta1, &student2);

    cout << "--- Session 1 ---" << endl;
    session1.displaySession();

    cout << "--- Session 2 ---" << endl;
    session2.displaySession();

    TutoringSession merged = session1 + session2;
    cout << "--- Merged Session (session1 + session2) ---" << endl;
    cout << "Merged duration: " << merged.getDuration() << " minutes" << endl;

    cout << "--- Comparison (session1 > session2) ---" << endl;
    if (session1 > session2) {
        cout << "session1 is longer than session2" << endl;
    } else {
        cout << "session1 is not longer than session2" << endl;
    }

    return 0;
}
