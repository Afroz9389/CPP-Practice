#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum=0;
    
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout << sum;

    return 0;
}

/*RECURSION
#include <iostream>
using namespace std;
int sum(int n)
{
   if(n==0)
   {
    return n;
   }
   return n + sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"sum =  "<<sum(n);
}
*/