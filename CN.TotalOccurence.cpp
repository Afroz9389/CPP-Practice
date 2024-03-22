#include<iostream>
using namespace std;
int firstOcc(int ar[],int size,int key)
{
    int start=0,end=size-1,ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(ar[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(ar[mid]<key)//right side jao
        {
            start=mid+1;
        }
        else if(ar[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int ar[],int size,int key)
{
    int start=0,end=size-1,ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(ar[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(ar[mid]<key)//right side jao
        {
            start=mid+1;
        }
        else if(ar[mid]>key)//left side jao
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int ar[11]={1,2,3,4,3,3,3,3,3,3,3};
    cout<<"First occurence of 3 "<<firstOcc(ar,11,3)<<endl;
    cout<<"Last occurence of 3 "<<lastOcc(ar,11,3)<<endl;
    cout<<"Total occurence of 3="<<lastOcc(ar,11,3)-firstOcc(ar,11,3)+1<<endl;
 }