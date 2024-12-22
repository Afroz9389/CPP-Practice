#include<iostream>
using namespace std;
int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        int space=1;
        while(space<=n-row){
         cout<<" ";
         space++;
        }
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}