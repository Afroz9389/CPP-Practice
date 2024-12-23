 #include<stack>
 vector<int>nextSmallerElements(vector < int >arr,int n)
 {
   stack<int>s;
   s.push(-1);
   vector<int>ans(n);
   for(int i=n-1;i>=0;i--)
   {
     int curr=arr[i];
     while(s.top()!=-1&&arr[s.top()]>=curr)
     {
       s.pop();
     }
     //ans is stack ka top
     ans[i]=s.top();
     s.push(i);
   }
   return ans;
 }
vector<int>prevSmallerElements(vector < int >arr,int n)
 {
   stack<int>s;
   s.push(-1);
   vector<int>ans(n);
   for(int i=0;i<n;i++)
   {
     int curr=arr[i];
     while(s.top()!=-1&&arr[s.top()]>=curr)
     {
       s.pop();
     }
     //ans is stack ka top
     ans[i]=s.top();
     s.push(i);
   }
   return ans;
 }
 int largestRectangle(vector < int > & heights) {
   int n=heights.size();
   vector<int>next(n);
   next=nextSmallerElements(heights,n);
   vector<int>prev(n);
   prev=prevSmallerElements(heights,n);
   int area=0;
   for(int i=0;i<n;i++)
   {
     int length=heights[i];
     if(next[i] == -1)
     {
       next[i]=n;
     }
     int breadth=next[i]-prev[i]-1;
     int newArea=length*breadth;
     area=max(area,newArea);
   }
   return area;
 }