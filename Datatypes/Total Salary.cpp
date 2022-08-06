/* 
Write a program to calculate the total salary of a person. 
The user has to enter the basic salary (an integer) and the grade (an uppercase character), 
and depending upon which the total salary is calculated as -

totalSalary = basic + hra + da + allow – pf
where,
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.

Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int salary;
    char ch;
    cin>>salary>>ch;                            // put input as 10000 A, ans should be 17600

    double hra=0.0, da=0.0, pf=0.0;
    double tot_sal=0.0;
    hra=0.2*salary;
    da=0.5*salary;
    pf=0.11*salary;
    
    tot_sal=salary+hra+da-pf;

    if (ch=='A')
    {
        tot_sal=tot_sal+1700;

    }

    else if (ch=='B')
    {
        tot_sal=tot_sal+1500;
    }

    else
    {
        tot_sal=tot_sal+1300;
    }

    int b=round(tot_sal);                       // used to round off
    cout<<b;
}
