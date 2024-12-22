#include<iostream>
using namespace std;
int BinarySearch(int ar[],int size,int key)
{
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(ar[mid]==key)
        {
            return mid;
        }
        else if(key>ar[mid])
        {
            start=mid+1;
        }
        else
        {
            end=start-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
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
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<"Index is "<<BinarySearch(ar,size,key)<<endl;
}
