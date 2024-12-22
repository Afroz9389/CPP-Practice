bool isValidParenthesis(string s)
{
  	 stack<char> stk;
     for(int i=0; i<s.length(); i++) {
         
         char ch = s[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
         if(ch == '(' || ch == '{' || ch == '['){
             stk.push(ch);
         }
         else
         {
             //for closing bracket
             if(!stk.empty()) {
                  char top = stk.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      stk.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(stk.empty())
        return true;
    else
        return false;
}
