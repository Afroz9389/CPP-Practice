#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation to be performed"<<endl;
    cin>>op;
    switch(op){
        case '+':cout<<(a+b)<<endl;
                break;
        case '-':cout<<(a-b)<<endl;
                break;
        case '*':cout<<(a*b)<<endl;
                break;
        case '/':cout<<(a/b)<<endl;
                break;
        case '%':cout<<(a+b)<<endl;
                break;
        default:cout<<"This operation is invalid or not available";
    }
}