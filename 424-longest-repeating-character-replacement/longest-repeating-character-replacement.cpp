class Solution {
public:
    int characterReplacement(string s, int k) {
         int n = s.size();
        int maxLen = 0;
        unordered_set<char>st;
        for(char c:s)
        {
            st.insert(c);
        }
       for(char target:st)
       {
        int l = 0;
        int r = 0;
        int changes = 0;
        int len = 0;
        while(r<n)
        {
            if(s[r]!=target)
            {
                changes++;
            }
            while(changes>k)
            {
                if(s[l]!=target)
                {
                    changes--;
                }
                l++;
            }
            len = r-l+1;
            maxLen = max(len,maxLen);
            r++;
        }
       }
       return maxLen;
    }
};