#include<iostream>
using namespace std;
int sumFact(int n)
{
     int sum=0;
     for(int i=1;i<=n/2;i++)
     {
        if(n%i==0)
        {
            sum=sum+i;
        }
     }
     return sum;
}
int main()
{
    int n;
    cin>>n;
    if(n==sumFact(n))
    {
        cout<<"Perfet number";
    }
    else
    {
        cout<<"Not Perfect number";
    }
}