#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cin>>n;
    //print space
    while(row<=n){
        int space=n-row;
        while(space){
        cout<<" ";
        space--;
    }
    //print 1st triangle
    int col=1;
    while(col<=row)
    {
        cout<<col;
        col++;
    }
    //print 2nd triangle
    int col1=1,value=row-1;
    while(col1<row){
        cout<<value;
        value--;
        col1++;
        }
    cout<<endl;
    row++;
}

    }
    