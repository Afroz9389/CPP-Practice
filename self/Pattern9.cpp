#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}