#include<iostream>
using namespace std;
int duplicate(int ar[],int n)
{
    int ans=0;
    //Xor array elements
    for(int i=0;i<n;i++)
    {
        ans=ans^ar[i];
    }
    //XOR [1 TO N-1]
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    return ans;
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
    cout<<"Duplicate element "<<duplicate(ar,size);
}