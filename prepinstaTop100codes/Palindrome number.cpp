#include<iostream>
using namespace std;
int reverse(int n)
{
    int digit=0,rev=0;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cin>>n;
    if(reverse(n)==n)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}