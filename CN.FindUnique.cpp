#include<iostream>
using namespace std;
int unique(int ar[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^ar[i];
    }
    return ans;
}
int main()
{
    int ar[100];
    int size;
    cout<<"Enter array size"<<endl;
    cin>>size;
    if(size%2==0)
    {
        cout<<"Only odd size is accepted"<<endl;
    }
    else
    { 
     cout<<"Enter array values"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>ar[i];
    }
    cout<<"Unique element "<<unique(ar,size);
    }
}