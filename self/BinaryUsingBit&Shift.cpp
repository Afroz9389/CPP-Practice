#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit=0,ans=0,i=0;
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        n=n>>1;
        ans=ans+ pow(10,i)*bit;
        i++;
    }
    cout<<ans;
}