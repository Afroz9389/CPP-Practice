#include<iostream>
using namespace std;
int setBits(int n)
{
    int set=0;
    for(int i=0;n>0;i++)
    {
        int bit=n&1;
        if (bit==1)
        {
            set++;
        }
        n=n>>1;
        i++;
    }
    return set;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Total no of set bits= "<<setBits(n1)+setBits(n2);
}
