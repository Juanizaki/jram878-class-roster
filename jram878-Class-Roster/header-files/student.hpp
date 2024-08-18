//
//  student.hpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#pragma once
#include <string>
#include "degree.hpp"

class Student {
private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int daysToComplete[3];
    DegreeProgram degreeProgram;
    
public:
    // Constructer
    Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram);
    
    // Getters
    std::string getStudentID();
    std::string getFirstName();
    std::string getLastName();
    std::string getEmailAddress();
    int getAge();
    int getDaysToComplete();
    DegreeProgram getDegreeProgram();
    
    // Setters
    void setStudentID();
}
