#include<iostream>
#include<math.h>
using namespace std;
//reverse order
int main()
{
  int n1,i1=0,ans1=0;
  cin>>n1;
  while(n1!=0){
    int digit=n1%10;
    ans1=(ans1*10)+digit;
    n1=n1/10;
    i1++;
  }
  cout<<ans1<<endl;
//same order
  int n2,i2=0,ans2=0;
  cin>>n2;
  while(n2!=0){
    int digit=n2%10;
    ans2=(digit*pow(10,i2))+ans2;
    n2=n2/10;
    i2++;
  }
  cout<<ans2<<endl;
}