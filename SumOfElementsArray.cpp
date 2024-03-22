#include<iostream>
using namespace std;
int getSum(int ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
     sum=sum+ar[i];
    }
    return sum;
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
    cout<<"Sum of elementts "<<getSum(ar,size)<<endl;
    return 0;
}
