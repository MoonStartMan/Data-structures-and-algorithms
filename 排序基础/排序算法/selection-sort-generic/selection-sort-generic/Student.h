//
//  Student.h
//  selection-sort-generic
//
//  Created by 王潇 on 2021/2/22.
//

#ifndef Student_h
#define Student_h

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;
    bool operator<(const Student& otherStudent) {
        
        return score < otherStudent.score;
    }
    
    friend ostream& operator << (ostream &os, const Student &student) {
        os << "Student:" << student.name << " "<<student.score<<endl;
        return os;
    }
};

#endif /* Student_h */
