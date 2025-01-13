#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    for(int i=0;i<=31;i++)
    {
        if(n== pow(2,i))
        {
            res=1;
        }
    }
    if(res==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    
}