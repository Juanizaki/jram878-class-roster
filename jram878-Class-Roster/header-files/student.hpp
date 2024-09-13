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

class Student {

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
    
public:
    Student(string id, string fname, string lname, string email, int a, int days[], DegreeProgram dp);
    
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();
    
    void setStudentID(string id);
    void setFirstName(string fname);
    void setLastName(string lname);
    void setEmailAddress(string email);
    void setAge(int a);
    void setDaysInCourse(int days[]);
    void setDegreeProgram(DegreeProgram dp);
    
    void print();
};
