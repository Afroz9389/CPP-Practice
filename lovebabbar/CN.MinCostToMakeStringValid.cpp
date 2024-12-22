#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  //odd condition
  if(str.length()%2==1)
  {
    return -1;
  }
  stack<char>s;
  for(int i=0;i<str.length();i++)
  {
    char ch=str[i];
    if(ch=='{')
    {
      s.push(ch);
    }
    else
    {
      //ch is closed braces
      if(!s.empty()&&s.top()=='{') //valid ko pop kara do
      {
        s.pop();
      }
      else
      {
        s.push(ch);
      }
    }
  }
  //stack contains invalid expression
  int a=0,b=0;
  while(!s.empty())
  {
    if(s.top()=='{')
    {
      b++; //count of open braces
    }
    else{
      a++; //count of closed braces
    }
    s.pop();
  }
  int ans=(a+1)/2+(b+1)/2;
  return ans;
}