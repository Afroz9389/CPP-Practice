#include<iostream>
#include<math.h>
using namespace std;
int length(int n)
{
    int len=0;
    while(n!=0)
    {
        len++;
        n=n/10;
    }
    return len;
}
void armstrong(int n)
{
    int digit=0,sum=0;
    int temp=n;
    int len=length(n);
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+ pow(digit,len);
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
}
int main()
{
    int n;
    cin>>n;
    armstrong(n);
}