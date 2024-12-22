#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin>>n;
    // checking the number of divisors b/w 1 and the number n
    for(int i=1;i<=n;i++) 
    { 
        if(n % i == 0) 
        {
            count += 1; 
        }
    } 
    //if the number of divisors are > 2 then its not prime else its prime 0 and 1 are not prime numbers 
    if (n == 0 || n == 1) 
    {
       cout << n <<" is not prime";
    }
    else if(count > 2)
    { 
        cout << n <<" is not prime";
    } 
    else 
    {
        cout << n <<" is prime";
    }
    return 0;
 } 