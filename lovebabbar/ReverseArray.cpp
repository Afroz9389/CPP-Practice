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

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>reverse(vector<int>v)
{
    int s=0;
    int e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print (vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int>v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout<<"Vector before reversing"<<endl;
    print(v);
    vector<int>ans=reverse(v);
    cout<<"Vector after reversing"<<endl;
    print(ans);
    return 0;
}*/
