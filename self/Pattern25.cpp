#include<iostream>
using namespace std;
int main()
{
    int i,j,sp,n;
    int count=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      
      for(sp=1;sp<=n-i+1;sp++)
      {
        cout<<" ";
      }
      
      for(j=1;j<=i;j++)
      {
        cout<<count;
        count++;
      }
      cout<<endl;
    }
    
}