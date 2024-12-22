#include <iostream>
using namespace std;
int fact(int n)
{
    //base condition
    if(n==0)
    {
        return 1;
    }
    //recursive relation
    int small=fact(n-1);
    int big=n*small;
    return big;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}