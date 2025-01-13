#include<iostream>
using namespace std;
int sumOfDivisors(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==-0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if( (sumOfDivisors(n1)/n1) == (sumOfDivisors(n2)/n2) )
    {
        cout<<"Friendly pair";
    }
    else
    {
        cout<<"Not Friendly pair";
    }
}
