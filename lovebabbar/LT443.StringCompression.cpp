class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n=chars.size();
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            //yaha kab aaoge?
            //ya toh pura vector transverse kr liya
            //ya toh naya character encounter kar liya

            //old character store karlo
            chars[ansIndex]=chars[i];
            ansIndex++;
            //count kya hoga last occ-first occ
            int count=j-i;
            if(count>1)
            {
                //converting count into single digit & saving in answer
                string cnt=to_string(count);
                for(char ch:cnt)
                {
                    chars[ansIndex]=ch;
                    ansIndex++;
                }
            }
            //moving to new character
            i=j;
         }
         return ansIndex;
      }
};