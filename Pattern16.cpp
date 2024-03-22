#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    char start='A';
    cin>>n;
    while(row<=n)
    {
        int column=1;
        while(column<=row)
        {
            cout<<start;
            start++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}