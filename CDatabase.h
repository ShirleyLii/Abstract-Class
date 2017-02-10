#ifndef CDATABASE_H
#define CDATABASE_H
#include <vector>
#include "CStudent.h"

using namespace std;
class CDatabase {
public:
CDatabase(vector<CStudent*> records) {
    mRecords=records;
}

CDatabase(const CDatabase& orig) {
    mRecords=orig.mRecords;
}

CDatabase& operator = (const CDatabase & database){
    if(this!=&database){
        mRecords=database.mRecords;
    }
    return *this;
}

~CDatabase() {
}

void AddRecord(CStudent* record){
    mRecords.push_back(record);
}
void DisplayRecords(){
    for(int i=0;i<mRecords.size();i++){
        mRecords[i]->DisplayStudent();
    }
}
protected:
    vector<CStudent*> mRecords;
};

#endif /* CDATABASE_H */

