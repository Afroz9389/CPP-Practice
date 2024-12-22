#include <iostream>
using namespace std;
int main()
{
    int amount,hund=0,fif=0,twen=0,ten=0;
    cin>>amount;
    if(amount>=100){
       hund=amount/100;
    }
           amount=(amount-hund*100);
     if(amount>=50){
           fif=amount/50;
     }
           amount=(amount-fif*50);
     if(amount>=20){
           twen=amount/20;
     }
           amount=(amount-twen*20);
      if(amount>=10){
           ten=amount/10;
      }
           amount=(amount-ten*10);
    cout<<"Number of 100 notes="<<hund<<endl;
    cout<<"Number of 50 notes="<<fif<<endl;
    cout<<"Number of 20 notes="<<twen<<endl;
    cout<<"Number of 10 notes="<<ten<<endl;
 }