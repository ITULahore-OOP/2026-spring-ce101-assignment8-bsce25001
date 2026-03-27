#ifndef UNIVERSITY_MEMBER_H
#define UNIVERSITY_MEMBER_H
#include <string>
#include <iostream>
using namespace std;

//======CLASS UNIVERSITY MEMBER=========
class UniversityMember {
    private:
        string name;
        int memberID;
    public:
        UniversityMember(string name, int memberid);
        virtual ~UniversityMember();
        string getName() const;
        int getMemberID() const;
        int getMemberId() const;
        virtual void displayRole() const = 0; 
};
#endif