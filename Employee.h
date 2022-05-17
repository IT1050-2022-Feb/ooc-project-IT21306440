#pragma once 
#include<iostream>
#include <cstring>
using namespace std;

class Employee {
protected:
    int employeeId;
    string employeeName;
    int departmentNo;
    string departmentName;
public:
    Employee()
    {
        cout << "Constructor is running" << endl;
        employeeId = 001;
        employeeName = ("Janindu");
        departmentNo = 101;
        departmentName = ("IT dep");
    }
    void setEmployeeDetails(int EempID, string EempName, int EdepNo, string
        EdepName)
    {
        employeeId = EempID;
        employeeName = EempName;
        departmentNo = EdepNo;
        departmentName = EdepName;
    }

};
