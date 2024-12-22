/*Condtions for Leap Year
Following are the rules to predict if a given is a year leap or not. If any one of the conditions below is met then it's a leap year -
1. If a year is divisible by 400, it's a leap year.
2. If a year is divisible by 4 but not by 100 then its leap year
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year % 400 == 0)
    {
        cout << year << " is a Leap Year";
    }  
    else if(year % 4 == 0  && year % 100 != 0)
    {
        cout << year << " is a Leap Year";
    }  
    else
    {
        cout << year << " is not a Leap Year";
    }
    return 0;
}