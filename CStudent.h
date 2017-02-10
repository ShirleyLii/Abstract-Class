
#ifndef CSTUDENT_H
#define CSTUDENT_H

#include <string>
#include <iostream>
using namespace std;

class CStudent {
protected:
    CStudent(string fn, string ln, unsigned int age, double gpa):
    mFirstName(fn),mLastName(ln),mAge(age),mGPA(gpa){};
    
    CStudent(const CStudent& orig) {
    mFirstName=orig.mFirstName;
    mLastName=orig.mLastName;
    mAge=orig.mAge;
    mGPA=orig.mGPA;
}

CStudent& operator = (const CStudent & employee){
    if(this!=&employee){
        mFirstName=employee.mFirstName;
        mLastName=employee.mLastName;
        mAge=employee.mAge;
        mGPA=employee.mGPA;
    }
    return *this;
}

~CStudent() {}
public:
virtual void DisplayStudent()=0;//{
    //cout<<mFirstName<<" "<<mLastName<<"\t Age:"<<mAge<<"\t GPA:"<<mGPA;
//}
protected:
    string mFirstName;
    string mLastName;
    unsigned int mAge;
    double mGPA;
};

#endif /* CSTUDENT_H */

