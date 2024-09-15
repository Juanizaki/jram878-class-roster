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
        Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);
        ~Student();
        
        string getStudentID();
        string getFirstName();
        string getLastName();
        string getEmailAddress();
        int getAge();
        int* getDaysInCourse();
        DegreeProgram getDegreeProgram();
        
        void setStudentID(string studentID);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmailAddress(string emailAddress);
        void setAge(int age);
        void setDaysInCourse(int daysInCourse[]);
        void setDegreeProgram(DegreeProgram degreeProgram);
        
        void print();
};
