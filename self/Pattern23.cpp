#include <iostream>
using namespace std;
int main()
{
    int i,j,sp,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
           cout<<i;
        }
        cout<<endl;
    }
}