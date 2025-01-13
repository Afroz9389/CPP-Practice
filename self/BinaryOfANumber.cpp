#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0;
    cin>>n;
    int temp=n,rem;
    while(temp!=0)
    {
       rem=temp%2;
       ans+=rem*pow(10,i);
       temp=temp/2;
       i++;
    }
    cout<<ans;
}