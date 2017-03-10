/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 3, 2017, 11:25 AM
 * Purpose: To make my life somewhat easier
 */

//System Libraries Here
#include <iostream> //Input Library
#include<iomanip> //Format Library
#include<io>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f;
const float CNVYRMN=12.0f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float fvloan, //Face value loan in $'s
          cnsmRcv,     //Consumer Receives $'s
          mthPay;      //Monthly payment in $'s
    int   intRate,     // Yearly percentage interest rate 
          nMonths,      //number of months in the loan
          upfrntI,     // Upfront interest %
          intscalc;    //Interest calculated
    
    //Input or initialize values Here
    cout<<"This program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount received $";
    cin>>cnsmRcv;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate % = ";
    cin>>intRate;        
    //Process/Calculations Here
    float i=intRate/CNVYRMN/PERCENT;
    float temp=pow((1+i),nMonths);
    mthPay=1*temp*cnsmRcv/(temp-1);
    fvloan=cnsmRcv/(1+intRate)/PERCENT/(CNVYRMN*nMonths) ;
    mthPay=cnsmRcv*(intRate*pow(1+intRate,nMonths)/pow((1+intRate),nMonths)-1);
    float n=nMonths;
    float 1=cnsmRcv;
    mthPay=1*pow(1+i,n)*1/(pow(1+i,n)-1);
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<cnsmRcv<<endl;
    cout<<"Number of Monthly Payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Face Value of the loan - $"<<fvloan<<endl; 
    cout<<"Monthly Payment = $"<<mthPay<<endl;

    //Exit
    return 0;
}

