#include<iostream>
using namespace std;
//1->True
//0->False
bool isEven(int n)
{
    if(n&1) //if true no will be odd
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isEven(n)==1)
    {
    cout<<"Even no";
    }
    else
    {
        cout<<"Odd number";
    }
}
