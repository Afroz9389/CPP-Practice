#include<iostream>
using namespace std;
int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n){
        int space=1;
        while(space<row){
            cout<<" ";
            space++;
        }
        int col=1,value=row;
        while(col<=n-row+1){
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}