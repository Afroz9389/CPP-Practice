#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    if(n<0)
    {
        cout<<"Not Possible";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<f;
    } 
}