#include<iostream>
using namespace std;
int main()
{
    int n=15;
    int a=0,b=1,sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}