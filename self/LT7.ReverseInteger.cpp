#include<iostream>
using namespace std;
int main()
{
    int n, ans=0;
    cin>>n;
    while(n!=0)
    {
        int digit=n%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN))
        {
            return 0;
        }
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<ans;
}