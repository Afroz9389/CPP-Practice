#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double n,p,res=1;
    cin>>n>>p;
    //better->    cout<< pow(n,p);

    //works only for positive
    for(int i=1;i<=p;i++)
    {
        res=res*n;
    }
    cout<<res;
}