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
bool armstrong(int n)
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
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int lower,upper;
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++)
    {
      if(armstrong(i))
      {
        cout<<i<<endl;
      }
    }
}