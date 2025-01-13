#include<iostream>
using namespace std;
int main()
{
    bool d=0;
    int n;
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            d=1;
            break;
        }
    }
    if(d==1)
    {
        cout<<"Not Prime";
    }
    else
    {
        cout<<"Prime";
    }
}