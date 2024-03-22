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
        int column=1;
        while(column<=n-row+1){
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}