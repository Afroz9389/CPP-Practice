#include<iostream>
using namespace std;
int main()
{
    int f,s,t;
    cin>>f>>s>>t;
    if(f>=s&&f>=t)
    {
        cout<<f;
    }
    else if(s>=f&&s>=t)
    {
        cout<<s;
    }
    else
    {
        cout<<t;
    }
}
