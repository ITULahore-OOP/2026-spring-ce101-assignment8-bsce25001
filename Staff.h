#ifndef STAFF_H
#define STAFF_H
#include "UniversityMember.h"
#include "AccessCard.h"
#include <string>
#include <iostream>
using namespace std;

//======CLASS STAFF=========
class Staff : virtual public UniversityMember {
    private:
        double salary;
        AccessCard accessCard;
    public:
        Staff(string name, int memberid, double salary, AccessCard accessCard);
        double getSalary() const;
        void displayRole() const override;
        void displayCard() const;
};
#endif