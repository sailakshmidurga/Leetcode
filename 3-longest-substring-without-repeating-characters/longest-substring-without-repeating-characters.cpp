class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0,r = 0;
        int maxlen = 0;
        int hashLen = 256;
        int hash[hashLen];
        for(int i = 0;i<hashLen;i++)
        {
            hash[i] = -1;
        }
        while(r<n)
        {
            if(hash[s[r]] != -1)
            {
                if(hash[s[r]] >= l)
                {
                    l = hash[s[r]]+1;
                }
            }
            hash[s[r]] = r;
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};