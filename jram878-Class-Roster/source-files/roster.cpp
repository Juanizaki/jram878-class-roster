//
//  roster.cpp
//  jram878-Class-Roster
//
//  Created by Juan Ramos on 7/11/24.
//

#include "roster.hpp"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Roster::Roster() {
    lastIndex = -1;
    capacity = 5;
    classRosterArray = new Student*[capacity];
}

void Roster::parse(string row) {
    stringstream ss(row);
    string token;
}

