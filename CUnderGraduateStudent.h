/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CUnderGraduateStudent.h
 * Author: Reborn
 *
 * Created on January 24, 2017, 3:17 PM
 */

#ifndef CUNDERGRADUATESTUDENT_H
#define CUNDERGRADUATESTUDENT_H
#include "CStudent.h"
#include <vector>

class CUnderGraduateStudent : public CStudent{
public:
    CUnderGraduateStudent(string fn, string ln, unsigned int age, double gpa,string dept):
    CStudent(fn, ln, age, gpa){
        /*mFirstName=fn;
        mLastName=ln;
        mAge=age;
        mGPA=gpa;*/
        mDeptName=dept;
}

CUnderGraduateStudent(const CUnderGraduateStudent& orig):CStudent(orig) {
    /*mFirstName=orig.mFirstName;
    mLastName=orig.mLastName;
    mAge=orig.mAge;
    mGPA=orig.mGPA;*/
    mDeptName=orig.mDeptName;
}
CUnderGraduateStudent& operator = (const CUnderGraduateStudent & gs){
    if(this!=&gs){
        mDeptName=gs.mDeptName;
        /*mFirstName=gs.mFirstName;
        mLastName=gs.mLastName;
        mAge=gs.mAge;
        mGPA=gs.mGPA;*/
        CStudent::operator =(gs);
    }
    return *this;
}
~CUnderGraduateStudent() {
}

virtual void DisplayStudent(){
    cout<<mFirstName<<" "<<mLastName<<"\t Age:"<<mAge<<"\t GPA:"<<mGPA;
    cout<<"\t"<<mDeptName<<"\t UnderGraduate"<<"\n";
}

protected:
    string mDeptName;
};

#endif /* CUNDERGRADUATESTUDENT_H */

