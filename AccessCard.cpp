#include "AccessCard.h"

AccessCard::AccessCard(string cardID, int accessLevel): cardID(cardID), accessLevel(accessLevel) {

}

string AccessCard::getCardID() const {
    return cardID;
}

int AccessCard::getAccessLevel() const {
    return accessLevel;
}

void AccessCard::displayCardInfo() const {
    cout << "Access Card ID: " << cardID << ", Access Level: " << accessLevel << endl;
}