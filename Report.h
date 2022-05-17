#pragma once 
#include<iostream>
#include <cstring> 
using namespace std;

class Report {
private:
    int reportNo;
    string reportName;
    string reportType;
    string issueDate;
public:
    Report()
    {
        cout << "Report default constructor called";
        reportNo = 10;
        reportName = ("user");
        reportType = ("pdf");
        issueDate = "04/04/2022";

    }
    Report(int PrepNo, string PrepName, string PrepType, string PiDate)
    {
        reportNo = PrepNo;
        reportName = PrepName;
        reportType = PrepType;
        issueDate = PiDate;
    }

    void displayReport()
    {
        cout << "Report Number : " << reportNo << endl;
        cout << "Report Name : " << reportName << endl;
        cout << "Report Type : " << reportType << endl;
        cout << "issue Date : " << issueDate << endl;

    }
};

