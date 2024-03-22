#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
    while(row<=n)
    {
        int column=1;
        while(column<=n)
        {
            char ch='A'+column-1;
            cout<<ch;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}