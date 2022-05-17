#pragma once 
// Payment 

#include <iostream> 
#include <string> 
#include "Cart.h" 
#include "IT_Staff.h" 
using namespace std;
class Payment {
private:
    int PaymentId;
    string Method;
    string Date;
    double TotalAmount;
    string pkgType;
    ITStaff* stf[20];
public:
    Payment()
    {
        cout << "Constructor is running" << endl;
        PaymentId = 0;
        Method = "None";
        Date = "00-00-0000";
        TotalAmount = 00.00;
        pkgType = "None";


    }
    Payment(int pID, string Mtd, string Dt, double tamount, string Pt)
    {
        PaymentId = pID;
        Method = Mtd;
        Date = Dt;
        TotalAmount = tamount;
        pkgType = Pt;
    }
    void displayPaymentDetails()
    {
        cout << "*******" << endl;
        cout << "Your Details are given below" << endl;
        cout << "Payment ID : " << PaymentId << endl;
        cout << "Payment Method : " << Method << endl;
        cout << "Payment Date : " << Date << endl;
        cout << "Total Amount :" << TotalAmount << endl;
        cout << "Package Type:" << pkgType << endl;
        cout << "******" << endl;

    }
    double getAmount()
    {
        return TotalAmount;
    }
    string getPayType()
    {
        return pkgType;
    }

    ~Payment()
    {
        cout << "Deleting Payment" << PaymentId << endl;
    }
};

