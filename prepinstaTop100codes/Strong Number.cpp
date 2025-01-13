#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,temp,digit,sum=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+factorial(digit);
        temp=temp/10;
    }
    if(sum==factorial(n))
    {
        cout<<"Strong Number";
    }
    else
    {
        cout<<"Not Strong Number";
    }
}