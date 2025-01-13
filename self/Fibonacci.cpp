#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,sum=0;
    cin>>n;
    if(n==1)
    {
        cout<<0;
        
    }
    else if(n==2)
    {
        cout<<0<<1;
        
    }
    else
    {
      cout<<a;
      cout<<b;
      for(int i=1;i<=n-2;i++)
      {
        sum=a+b;
        cout<<sum;
        a=b;
        b=sum;
      }
    }

}

/*RECURSION
#include<iostream>
using namespace std;
int fib(int n)
{
  //base 
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
   return 0;
  }
  else if(n==2)
  {
    return 1;
  }
  else
  {
    return fib(n-1)+fib(n-2);
  }
}
int main()
{
  int n;
  cin>>n;
  cout<<fib(n);
}
*/