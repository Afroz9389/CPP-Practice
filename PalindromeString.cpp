// not case sensitive
char toLowerCase(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool CheckPalindrome(char arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(toLowerCase(arr[s])!=toLowerCase(arr[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}