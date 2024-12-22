#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,i=0,ans=0;
  cin>>n;
  while(n!=0){
    int digit=n%10;
    if(digit==1){ 
    ans=pow(2,i)+ans;
    }
    n=n/10;
    i++;
  }
  cout<<ans;
}