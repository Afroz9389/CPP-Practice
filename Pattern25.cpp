#include<iostream>
using namespace std;
int main()
{
    int row=1,n,value=1;
    cin>>n;
    while(row<=n){
        int space=1;
        while(space<=n-row){
         cout<<" ";
         space++;
        }
        int col=1;
        while(col<=row)
        {
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}