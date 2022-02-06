
/*
 * Person.h
 * 
 * Date: Feb 5, 2022
 *
 * Interface of the Person struct
 */



#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>

using namespace std;

struct Person
{

    int age, phone; 
    string name, email; 

    // Address Field, use getline 
    string AddL1, AddL2;

    Person()
    {
            age     = -1;
            phone   = -1;
            name    = "";
            email   = "";
    }

    Person(string newName, string newEmail, int newAge, int newPhone)
    {
            age      = newAge;
            phone    = newPhone;
            name     = newName;
            email    = newEmail;
    }

    void print(std::ostream &output);
};

#endif
