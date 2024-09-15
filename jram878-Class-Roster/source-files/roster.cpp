//
//  roster.cpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#include "roster.hpp"
#include <iostream>
#include <sstream>

using namespace std;

Roster::Roster() {
    lastIndex = -1;
}

// Parses a row of student data and adds it to the roster
void Roster::parse(string row) {
    stringstream studentStream(row);
    string data[9]; // Array to hold parsed data
    
    // Extracts each component of the row and stores in the data array
    for (int i = 0; i < 9; i++) {
        getline(studentStream, data[i], ',');
    }
    
    // Assigns variables from the parsed data
    string studentID = data[0];
    string firstName = data[1];
    string lastName = data[2];
    string emailAddress = data[3];
    int age = stoi(data[4]);
    int daysInCourse1 = stoi(data[5]);
    int daysInCourse2 = stoi(data[6]);
    int daysInCourse3 = stoi(data[7]);
    DegreeProgram degreeProgram;
    if (data[8] == "SECURITY") degreeProgram = SECURITY;
    else if (data[8] == "NETWORK") degreeProgram = NETWORK;
    else degreeProgram = SOFTWARE;
    
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

// Adds a student to the roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    lastIndex++;
    int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    classRosterArray[lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
}

// Removes a student from the roster
void Roster::remove(string studentID) {
    bool found = false;
    
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            found = true;
            delete classRosterArray[i]; // Free memory at this location
            // Shift students left by one
            for (int j = i; j < lastIndex; j++) {
                classRosterArray[j] = classRosterArray[j + 1];
            }
            lastIndex--;
            cout << "Student: " << studentID << " has been removed" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Student: " << studentID << " was not found" << endl;
    }
}

void Roster::printAll() {
    for (int i = 0; i <= lastIndex; i++) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            int* days = classRosterArray[i]->getDaysInCourse();
            cout << "Student: " << studentID << string(2, '\t') << "Average: " << (days[0] + days[1] + days[2])/ 3 << " days" << endl;
        }
    }
}

void Roster::printInvalidEmails() {
    for (int i = 0; i <= lastIndex; i++) {
        string email = classRosterArray[i]->getEmailAddress();
        if (email.find(' ') != string::npos || email.find('@') == string::npos || email.find('.') == string::npos) {
            cout << "Invalid Email: " << email << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

// Destructor to release memory
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete classRosterArray[i];
    }
}
