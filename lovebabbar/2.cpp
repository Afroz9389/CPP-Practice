#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"This is lowercase";
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"This is uppercse";
    }
    else{
        cout<<"This is a digit";
    }
}