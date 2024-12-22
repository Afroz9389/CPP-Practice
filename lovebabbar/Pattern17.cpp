#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
    while(row<=n)
    {
        int column=1;
        while(column<=row)
        {
            char ch='A'+row+column-2;
            cout<<ch;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}