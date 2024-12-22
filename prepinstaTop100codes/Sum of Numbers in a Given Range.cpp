#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    int r1,r2;
    cin>>r1>>r2;
    for(i=r1;i<=r2;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}

/* RECURSION
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    //base condition
    int s;
    if(a>b)
    {
        return 0;
    }
    s=a+sum(a+1,b);
    return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Sum = "<<sum(a,b);
}
*/