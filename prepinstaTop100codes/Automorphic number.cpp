#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sqr=n*n;
  //int temp=n;
  while(sqr!=0 && n!=0)
  {
    int digit1=n%10;
    int digit2=sqr%10;
    if(digit1==digit2)
    {
        n=n/10;
        sqr=sqr/10;
    }
    else
    {
        cout<<"Not Automorphic";
        break;
    }
  }
  if(n==0)
  {
    cout<<"Automorphic";
  }
}

  