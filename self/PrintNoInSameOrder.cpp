#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0;
    cin>>n;
    while(n!=0)
    {
        int digit=n%10;
        ans=digit* pow(10,i)+ans;
        n=n/10;
        i++;
    }
    cout<<ans;
}