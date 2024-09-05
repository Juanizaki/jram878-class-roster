//
//  main.cpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#include "roster.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    cout << "C867-Scripting & Programming: Applications \n";
    cout << "Language: C++ \n";
    cout << "StudentID: 011028882 \n";
    cout << "Name: Juan Ramos \n\n";
    
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Juan,Ramos,jram878@wgu.edu,29,51,22,55,SOFTWARE"
    };
    
    /* *** TESTING *** */
    
    // Array for days to complete courses
    int daysArray[3] = {30, 40, 50};
    
    // Student object using constructor
    Student student1("A1", "Joe", "Shmoe", "joe.shmoe@test.com", 20, daysArray, SOFTWARE);
    
    // Testing getter functions
    cout << "*** Testing Getter Functions ***" << endl;
    cout << "StudentID: " << student1.getStudentID() << endl;
    cout << "First Name: " << student1.getFirstName() << endl;
    cout << "Last Name: " << student1.getLastName() << endl;
    cout << "Email: " << student1.getEmailAddress() << endl;
    cout << "Age: " << student1.getAge() << endl;
    cout << "Days in Course: {" << student1.getDaysToComplete()[0] << ", " << student1.getDaysToComplete()[1] << ", " << student1.getDaysToComplete()[2] << "}" << endl;
    cout << "Degree Program: " << (student1.getDegreeProgram() == SOFTWARE ? "Software" : "") << endl;
        
}
