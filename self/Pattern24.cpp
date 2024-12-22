#include<iostream>
using namespace std;
int main()
{
    int i,j,sp,n;
    int count;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      count=1;
      for(sp=1;sp<=i-1;sp++)
      {
        cout<<" ";
      }
      count=count+i-1;
      for(j=1;j<=n-i+1;j++)
      {
        cout<<count;
        count++;
      }
      cout<<endl;
    }
    
}