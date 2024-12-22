#include<iostream>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int count=0;
        while(n!=0){
            //check last bit
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        cout<<count;
        /*string n;
        cin>>n;
        int count=0;
        for(int i=0;i<=n.size();i++){
            if(n[i]&1){
                count++;
            }
        }
        cout<<count;*/
}
