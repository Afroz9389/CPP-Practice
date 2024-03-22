#include<iostream>
using namespace std;
bool search(int ar[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (ar[i]==key)
        {
            return true;
        }
    }
    return false;
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
    if(search(ar,size,key))
    {
    cout<<"Found"<<endl; 
    }
    else
    {
    cout<<"Not Found"<<endl;
    }
    return 0;
}