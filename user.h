#include "person.h"
#include <map>

class User{
    public:
        void addContact(Person &newContact);
        void deleteContact(Person &deleted);
    private:
        Person mainUser;
        std::map<Person> contacts;

};
