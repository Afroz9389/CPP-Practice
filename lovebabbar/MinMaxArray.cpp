#include<iostream>
using namespace std;
int getMin(int ar[],int n)
{
    int mini=ar[0];
    for(int i=0;i<n;i++)
    {
        //mini=min(ar[i],mini);
        if(ar[i]<mini)
        {
            mini=ar[i];
        }
    }
    return mini;
}
int getMax(int ar[],int n)
{
    int maxi=ar[0];
    for(int i=0;i<n;i++)
    {
        //maxi=max(ar[i],maxi);
        if(ar[i]>maxi)
        {
            maxi=ar[i];
        }
    }
    return maxi;
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
    cout<<"Maximum element"<<getMax(ar,size)<<endl;
    cout<<"Minimum element"<<getMin(ar,size)<<endl;
    return 0;
}
