#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int temp=n;
    while(temp!=0)
    {
        int digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    if(n%sum==0)
    {
        cout<<"Harshad Number";
    }
    else
    {
        cout<<"Not Harshad Number";
    }
}