#include<iostream>
using namespace std;
void altReverse(int ar[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
        {
            swap(ar[i],ar[i+1]);
        }
    }
}
void printArray(int ar[],int n)
{
  for(int i=0;i<n;i++)
    {
       cout<<ar[i]<<" ";
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
    
    altReverse(ar,size);
    printArray(ar,size);
}