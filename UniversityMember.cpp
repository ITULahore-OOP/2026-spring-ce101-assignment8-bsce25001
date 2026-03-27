#include "UniversityMember.h"

UniversityMember::UniversityMember(string name, int memberid):name(name), memberID(memberid) {

}

UniversityMember::~UniversityMember() {

}

string UniversityMember::getName() const {
    return name;
}

int UniversityMember::getMemberID() const {
    return memberID;
}

int UniversityMember::getMemberId() const {
    return memberID;
}

void UniversityMember::displayRole() const {
    cout << "University Member: " << name << " (ID: " << memberID << ")" << endl;
}
