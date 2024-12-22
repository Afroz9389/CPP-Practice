#include<iostream>
using namespace std;
int main()
{
    int i,j,k,sp,count,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      for(sp=1;sp<=n-i+1;sp++)
      {
        cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
        cout<<j;
      }
      count=i-1;
      for(k=1;k<=i-1;k++)
      {
        cout<<count;
        count--;
      }
      for(sp=1;sp<=n-1;sp++)
      {
        cout<<" ";
      }
      cout<<endl;
    }
    
}