#include <bits/stdc++.h> 
#include <stack>
void solve(stack<int>&inputStack,int count, int N)
{
   //base case
   if(count==N/2){
      inputStack.pop();
      return;
   }
   int num=inputStack.top();
   inputStack.pop();
   //Recursive call
   solve(inputStack,count+1,N);
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	int count=0;
   solve(inputStack,count,N);
}