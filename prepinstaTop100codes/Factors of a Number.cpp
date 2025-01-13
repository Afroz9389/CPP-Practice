#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // for(int i=1;i<=n/2;i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }
}