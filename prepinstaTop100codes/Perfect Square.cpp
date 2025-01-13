#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n/4;i++)
    {
        if(n/i==i && n%i==0)
        {
            c++;
            cout<<"A perfect square of "<<i<<" ";
        }
    }
    if(c==0)
    {
        cout<<"Not a perfect square";
    }
}


//double n;
//     cin>>n;
    
//     int x = sqrt(n);
    
//     if(x * x==n)



// #include <iostream>
// #include <math.h>
// using namespace std;
 
// void checkperfectsquare(int n)
// {
//     if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
//         cout << "True";
//     }
//     else {
//         cout << "False";
//     }
// }

// int main()
// {
 
//     int n = 49;
//     checkperfectsquare(n);
//     return 0;
// }
