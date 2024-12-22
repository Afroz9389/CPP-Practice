#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,prod=1;
    while(n!=0){
        int rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"Prod-Sum="<<(prod-sum);
}