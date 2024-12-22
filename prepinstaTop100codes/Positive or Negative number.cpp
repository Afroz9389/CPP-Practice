#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if (num > 0)
    {
         cout << "The number is positive";
    }
    else if (num < 0)
    {
        cout << "The number is negative";
    }
    else
    {
        cout << "Zero";
    }
    return 0;
}

