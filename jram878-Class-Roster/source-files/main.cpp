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
    
    cout << "C867-Scripting & Programming: Applications\n";
    cout << "Language: C++\n";
    cout << "StudentID: 011028882\n";
    cout << "Name: Juan Ramos\n\n";
    
    Roster classRoster;
    
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Juan,Ramos,jram878@wgu.edu,29,51,22,55,SOFTWARE"
    };
    
    // Adds each student to the roster
    for (int i = 0; i < 5; i++) {
        classRoster.parse(studentData[i]);
    }
    
    // Prints all students
    cout << "Displaying all students:\n";
    classRoster.printAll();
    cout << endl;
    
    // Prints invalid emails
    cout << "Displaying invalid emails:\n";
    classRoster.printInvalidEmails();
    cout << endl;
    
    // Prints average days in course for each student
    cout << "Displaying average days in course:\n";
    for (int i = 0; i <= 4; i++) {
        classRoster.printAverageDaysInCourse(classRoster.getClassRosterArray()[i]->getStudentID());
    }
    cout << endl;
    
    // Prints by software degree program
    cout << "Displaying students in degree program: SOFTWARE\n";
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;
    
    // Removing A3
    cout << "Removing student: A3\n";
    classRoster.remove("A3");
    cout << endl;
    
    // Prints all students again
    cout << "Displaying all students: UPDATED\n";
    classRoster.printAll();
    cout << endl;
    
    // Attempting to remove A3 again
    cout << "Removing student: A3\n";
    classRoster.remove("A3");
    cout << endl;
    
    cout << "Program Complete\n\n";
    
    return 0;
}
