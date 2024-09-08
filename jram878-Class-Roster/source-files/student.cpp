//
//  student.cpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#include "student.hpp"
#include <iostream>
#include <string>

using namespace std;

// Constructor implementation
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; ++i) {
        this->daysToComplete[i] = daysToComplete[i];
    }
    this->degreeProgram = degreeProgram;
}

// Getter implementation
string Student::getStudentID() { return studentID; }
string Student::getFirstName() { return firstName; }
string Student::getLastName() { return lastName; }
string Student::getEmailAddress() { return emailAddress; }
int Student::getAge() { return age; }
int* Student::getDaysToComplete() { return daysToComplete; }
DegreeProgram Student::getDegreeProgram() { return degreeProgram; }


// Setter implementation
void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysToComplete(int daysToComplete[]) {
    for (int i = 0; i < 3; ++i) {
        this->daysToComplete[i] = daysToComplete[i];    // Set each element of the array
    }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

// Print implementation
void Student::print() {
    cout << studentID << string(2, '\t')
         << firstName << string(2, '\t')
         << lastName << string(2, '\t')
         << emailAddress << string(2, '\t')
         << age << string(2, '\t')
         << "{" << daysToComplete[0] << ", " << daysToComplete[1] << ", " << daysToComplete[2] << "}" << string(2, '\t');
         if (degreeProgram == SECURITY) {
             cout << "Security \n";
         } else if (degreeProgram == NETWORK) {
             cout << "Network \n";
         } else {
             cout << "Software \n";
         }
}
