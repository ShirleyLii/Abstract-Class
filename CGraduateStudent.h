
#ifndef CGRADUATESTUDENT_H
#define CGRADATESTUDENT_H

#include "CStudent.h"
#include <vector>

class CGraduateStudent : public CStudent{
public:
    CGraduateStudent(string fn, string ln, unsigned int age, double gpa, string dept, vector<CStudent*> students):
    CStudent(fn,ln,age,gpa) {
    mDeptName=dept;
    mStudents=students;
}

CGraduateStudent(const CGraduateStudent& orig):CStudent(orig) {
    mDeptName=orig.mDeptName;
    mStudents=orig.mStudents;
}
CGraduateStudent& operator = (const CGraduateStudent & manager){
    if(this!=&manager){
        mDeptName=manager.mDeptName;
        mStudents=manager.mStudents;
        CStudent::operator =(manager);
    }
    return *this;
}
~CGraduateStudent() {
}

virtual void DisplayStudent(){
    cout<<mFirstName<<" "<<mLastName<<"\t Age:"<<mAge<<"\t GPA:"<<mGPA;
    cout<<"\t"<<mDeptName<<"\t No. of Students supervised:"<<mStudents.size()<<"\n";
    for(int i=0;i<mStudents.size();i++){
        cout<<"\tStudent:";
        mStudents[i]->DisplayStudent();
    }
}

protected:
    string mDeptName;
    vector<CStudent*> mStudents;
};

#endif /* CGRADUATESTUDENT_H */

