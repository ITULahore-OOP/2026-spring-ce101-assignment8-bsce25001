#include "Staff.h"

Staff::Staff(string name, int memberid, double salary, AccessCard accessCard): UniversityMember(name, memberid), salary(salary), accessCard(accessCard) {


}

double Staff::getSalary() const {
    return salary;
}     

void Staff::displayRole() const {
    cout << "Role: Staff, Name: " << getName() << " (ID: " << getMemberID() << "), Salary: $" << salary << endl;
}

void Staff::displayCard() const {
    accessCard.displayCardInfo();
}