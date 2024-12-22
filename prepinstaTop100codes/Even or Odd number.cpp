#include <iostream>
using namespace std;
int main ()
{
    int number;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " : Even";
    }
    else
    {
        cout << number << " : Odd";
    } 
    return 0;
}

/*BITWISE OPERATOR
#include <iostream>
using namespace std;
bool isEven(int number)
{
    // n & 1 is 1, then odd, else even
    if((number & 1)==1)
    {
      return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(isEven(n))
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}
*/