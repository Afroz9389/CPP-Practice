class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        //step1:push all candidates into stack
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        //step2:get 2 elements and compare
        while(s.size()>1)
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            //if a knows b
            if(M[a][b]==1)
            {
              s.push(b);
            }
            //else if b knows a
            else
            {
                s.push(a);
            }
            //step3:single element in stack is potential celebrity
            //verify
            int candidate=s.top();
            //row check
            int zeroCount=0;
            for(int i=0;i<n;i++)
            {
                if(M[candidate][i]==0)
                {
                    zeroCount++;
                }
            }
            //all zeroes
            if(zeroCount != n)
            {
              return -1;
            }
            //col check
            int oneCount=0;
            for(int i=0;i<n;i++)
            {
                if(M[i][candidate]==1)
                {
                    oneCount++;
                }
            }
            if(oneCount != n-1)
            {
              return -1;
            }
            return candidate;
        }
    }
};