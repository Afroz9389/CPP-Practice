#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=0,ans=0,n;
    cin>>n;
    while(n!=0)
    {
        int digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
        i++;
    }
    cout<<ans;
}