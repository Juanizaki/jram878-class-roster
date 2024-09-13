//
//  roster.hpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#pragma once
#include "student.hpp"
#include <stdio.h>

class Roster {
    
private:
    int lastIndex;
    int capacity;
    Student** classRosterArray;
    
public:
    Roster();
    ~Roster();
    
    void parse(string row);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

};

