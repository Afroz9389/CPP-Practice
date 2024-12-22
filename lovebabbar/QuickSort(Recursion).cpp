#include <iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    //count element less than pivot
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    //pivot ka right place
    int pivotIndex=s+cnt;
    swap(arr[s],arr[pivotIndex]);

    //left & right part ab sambhalna h
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //partition karenge
    int p=partition(arr,s,e);
    //left part ko sort karenge
    quickSort(arr,s,p-1);
    //right part ko sort karenge
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[5]={2,4,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);
    //print kardo sorted array
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}