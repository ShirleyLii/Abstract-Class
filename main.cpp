
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include "CDatabase.h"
#include "CStudent.h"
#include "CGraduateStudent.h"
#include "CUnderGraduateStudent.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //check default constructors
    vector<CStudent*> stdnt;
    CUnderGraduateStudent UGS("John","Doe",20,3.5,"CSE");
    UGS.DisplayStudent();
    CGraduateStudent GS("John","Smith",26,3.5,"Networking",stdnt);
    GS.DisplayStudent();
    cout<<"Default Constructor Check\n\n";
    
    //check copy constructors
    CUnderGraduateStudent ugrad1=UGS;
    ugrad1.DisplayStudent();
    CGraduateStudent grad1=GS;
    grad1.DisplayStudent();
    cout<<"Copy Constructor Check\n\n";
    
    //check assignment operator
    CUnderGraduateStudent ugrad3("John","Doe",18,4.0,"EGR");
    ugrad3.DisplayStudent();
    ugrad1=ugrad3;
    ugrad1.DisplayStudent();
    CGraduateStudent grad3("John","Smith",28,4.0,"Artifical Intelligence",stdnt);
    grad3.DisplayStudent();
    grad1=grad3;
    grad1.DisplayStudent();
    cout<<"Assignment Operator Check\n\n";
    
    //Add subordinates
    stdnt.push_back(&UGS);
    stdnt.push_back(&grad1);
    
    //Add records to database
    vector<CStudent*> allStudents;
    CDatabase std_data(allStudents);
    std_data.AddRecord(new CGraduateStudent("Alice","Cooper",20,2.0,"Machine Learning",stdnt));
    std_data.AddRecord(new CGraduateStudent("Tom","Cruise",22,4.0,"Network Security",stdnt));
    std_data.AddRecord(new CGraduateStudent("Bob","Jones",25,3.0,"Pattern Recognition",stdnt));
    std_data.AddRecord(new CGraduateStudent("James","Smith",24,3.7,"Image Processing",stdnt));
    std_data.AddRecord(new CGraduateStudent("Robert","Smith",27,4.0,"Signal Processing",stdnt));
    
    //display all records
    std_data.DisplayRecords();
    
    
    return 0;
}

