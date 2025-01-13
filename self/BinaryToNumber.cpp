#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,digit,ans=0,i=0;
    cin>>n;
    while(n!=0)
    {
      digit=n%10;
      if(digit==1)
      {
        ans=ans+pow(2,i);
      }
      i++;
      n=n/10;
    }
    cout<<ans;
}