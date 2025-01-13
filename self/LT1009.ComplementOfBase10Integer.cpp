#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     int n,ans=0,bit=0,i=0;
     cin>>n;
    if(n==0)
    {
        cout<<1;
    }
    else
    {
       while(n!=0)
       {
          bit=n&1;
          if(bit==1)
          {
            //comp=0
            //ignore
            i++;
          }
           else //bit==0
           {
             //comp=1
             ans=ans+pow(2,i);
             i++;
           }
            n=n>>1;
        }
        cout<< ans;
    }
}
