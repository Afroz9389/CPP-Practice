#include <bits/stdc++.h> 
void toLowerCase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<='Z'&&s[i]>='A')
        {
            s[i]=s[i]-'A'+'a';
        }
    }
}
bool Valid(char ch)
{
    if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A')||(ch<='9'&&ch>='0'))
    {
        return true;
    }
    return false;
}
bool checkPalindrome(string s)
{
    toLowerCase(s);
    int start=0;
    int end=s.length()-1;
    while(start<=end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        else
        {
            if(Valid(s[start]==false))
            {
                start++;
            }
            if(Valid(s[end]==false))
             { 
                end--; 
             }
        }
    }
    return true;
}
