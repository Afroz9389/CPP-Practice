#include <iostream>
using namespace std;
int main()
{
    int i,j,sp,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
           cout<<"*";
        }
        for(sp=1;sp<=i-1;sp++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}