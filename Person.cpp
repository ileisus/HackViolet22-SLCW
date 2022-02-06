/*
 * Person.cpp
 * 
 * Authors: Susie Li Chelsie Wei
 * Date: Feb 5 2022  
 * 
 * Purpose: Implementation of the Person struct. Prints the info
 *          of a passenger
 */

#include <iostream>
#include <string>
#include "Passenger.h"

using namespace std;

/*
 * Print 
 * Purpose: prints the passenger struct: id, departure station, arrival station
 * Parameters: ostream
 * Return: void 
 */
void Passenger::print(std::ostream &output)
{
        output << "[" << name << " " << email << ", " << age << " years old, "
               << " phone number: " << phone << endl;
}


