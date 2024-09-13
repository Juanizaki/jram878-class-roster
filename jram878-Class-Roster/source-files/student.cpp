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
Student::Student(string id, string fname, string lname, string email, int a, int days[], DegreeProgram dp) {
    studentID = id;
    firstName = fname;
    lastName = lname;
    emailAddress = email;
    age = a;
    for (int i = 0; i < 3; ++i) {
        daysInCourse[i] = days[i];
    }
    degreeProgram = dp;
}

// Getter implementation
string Student::getStudentID() { return studentID; }
string Student::getFirstName() { return firstName; }
string Student::getLastName() { return lastName; }
string Student::getEmailAddress() { return emailAddress; }
int Student::getAge() { return age; }
int* Student::getDaysInCourse() { return daysInCourse; }
DegreeProgram Student::getDegreeProgram() { return degreeProgram; }

// Setter implementation
void Student::setStudentID(string id) { studentID = id; }
void Student::setFirstName(string fname) { firstName = fname; }
void Student::setLastName(string lname) { lastName = lname; }
void Student::setEmailAddress(string email) { emailAddress = email; }
void Student::setAge(int a) { age = a; }
void Student::setDaysInCourse(int days[]) {
    for (int i = 0; i < 3; ++i) {
        daysInCourse[i] = days[i];
    }
}
void Student::setDegreeProgram(DegreeProgram dp) { degreeProgram = dp; }

// Print implementation
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
