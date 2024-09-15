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

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; i++) {
        this->daysInCourse[i] = daysInCourse[i];
    }
    this->degreeProgram = degreeProgram;
}

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmailAddress() { return this->emailAddress; }
int Student::getAge() { return this->age; }
int* Student::getDaysInCourse() { return this->daysInCourse; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }

void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < 3; i++) {
        this->daysInCourse[i] = daysInCourse[i];
    }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

void Student::print() {
    cout << "ID: " << studentID << string(2, '\t');
    cout << "First Name: " << firstName << string(2, '\t');
    cout << "Last Name: " << lastName << string(2, '\t');
    cout << "Email: " << emailAddress << string(2, '\t');
    cout << "Age: " << age << string(2, '\t');
    cout << "Days In Course: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << string(2, '\t');
    cout << "Degree Program: ";
    switch (degreeProgram) {
        case SECURITY:
            cout << "Security";
            break;
        case NETWORK:
            cout << "Network";
            break;
        case SOFTWARE:
            cout << "Software";
            break;
    }
    cout << endl;
}

Student::~Student() {
    // Not currently needed
}
