#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    char ch;
    for(i=0;i<n;i++)
    {
        ch='A'+i;
        for(j=0;j<=i;j++)
        {
           cout<<ch;
           ch++;
        }
        
        cout<<endl;
        
    }
}