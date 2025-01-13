#include<iostream>
using namespace std;
bool isPrime(int n)
{
    int count=0;
    if (n == 0 || n == 1) 
    {
      return false;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count>0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(isPrime(i))
            {
                c++;
                cout<<i<<" ";
            }
        }
    }
    if(c==0)
    {
        cout<<"No prime factors";
    }
}