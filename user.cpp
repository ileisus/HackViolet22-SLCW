#include <user.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;

void User::addContact(Person &newContact) {
    contacts.insert(newContact);
}

void User::deleteContact(Person &deleted, string name) {
    contacts.erase(name);
}

