#include<bits/stdc++.h>
using namespace std;
void getDup(int ar[],int n)
{
    sort(ar,ar+n);
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]==ar[i+1])
           {
             cout<<ar[i]<<" ";
           }
    }
}
int main()
{
    int ar[100];
    int size;
    cout<<"Enter array size"<<endl;
    cin>>size;
    cout<<"Enter array values"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>ar[i];
    }
    cout<<"All duplicate elements "<<endl;
    getDup(ar,size);
}
