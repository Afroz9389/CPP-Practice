#include<iostream>
using namespace std;
int main()
{
    int i,j,st,k,count,n;
    //int st1,st2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        for(st=1;st<=(i-1)*2;st++)
        {
            cout<<"*";
        }
        /*
        for(st1=1;st1<=i-1;st1++)
        {
           cout<<"*";
        }
        for(st2=1;st2<=i-1;st2++)
        {
            cout<<"*";
        }
        */
        count=n-i+1;
        for(k=1;k<=n-i+1;k++)
        {
            cout<<count;
            count--;
        }
        /*for(k=n;k>=i;k--)
        {
            cout<<count;
            count--;
        }*/
        cout<<endl;
    }
}