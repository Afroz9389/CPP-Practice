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
int nCr(int n,int r)
{
   return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r);
}