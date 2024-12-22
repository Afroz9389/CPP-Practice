#include <iostream>
using namespace std;
int Power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
      ans=ans*a;
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    int pow;
    cin>>pow;
    cout<<num<<" to the power "<<pow<<" is ";
    cout<<Power(num,pow);
}