#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        cout<<"is prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
}