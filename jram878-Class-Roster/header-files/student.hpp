//
//  student.hpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#pragma once
#include "degree.hpp"
#include <string>

using namespace std;

// Define the Student class
class Student {

// Declare private member variables (attributes)
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];  // Array to store days to complete each course
    DegreeProgram degreeProgram;
    
public:
    // Student(); <- Parameterless Constructor. Sets default values. (may not be needed)
    // Constructor to initialize a Student object with all attributes
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram);
    // ~Student(); <- Destructor (may not be needed)
    
    // Getters (accessor methods) to retrieve the values of private attributes
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysToComplete();
    DegreeProgram getDegreeProgram();
    
    // Setters (mutator methods) to modify the values of private attributes
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(int daysToComplete[]);
    void setDegreeProgram(DegreeProgram degreeProgram);
    
    // Method to print the student's details
    void print();
};
