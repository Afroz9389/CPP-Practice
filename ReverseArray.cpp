#include<iostream>
using namespace std;
void reverse(int ar[],int n)
{
    int temp=0,start=0,end=n-1;
    /*for(int i=0;i<n;i++)
    {
       if(start<=end)
       {
        temp=ar[end];
        ar[end]=ar[start];
        ar[start]=temp;
        start++;
        end--;
       }
    }*/
    while(start<=end)
    {
        swap(ar[start],ar[end]);
        start++;
        end--;
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
    
    reverse(ar,size);
    printArray(ar,size);
    
}