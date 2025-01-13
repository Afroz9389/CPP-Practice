#include<iostream>
using namespace std;
bool isPrime(int n)
{
    int count=0;
    if(n==0||n==1)
    {
        return false;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count>2)
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
    int lower,upper;
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++)
    {
      if(isPrime(i))
      {
        cout<<i<<endl;
      }
    }
}