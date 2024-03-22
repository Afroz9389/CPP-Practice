#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cin>>n;
    //1st triangle
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
        cout<<col;
        col++;
    }
    //2nd triangle
    int star=1;
    while(star<=(row-1)*2){
        cout<<"*";
        star++;
    }
    //3rd triangle
    int col1=n-row+1;
    while(col1>=1){
        cout<<col1;
        col1--;
        }
    cout<<endl;
    row++;
 }
}
    