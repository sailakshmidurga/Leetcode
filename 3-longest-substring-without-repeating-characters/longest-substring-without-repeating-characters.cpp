class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int r = 0;
        int l = 0;
        int maxLen = 0;
        unordered_map<int,int>mpp;
        while(r<n)
        {
            if(mpp.find(s[r]) != mpp.end())
            {
                l = max(l, mpp[s[r]] + 1);
            }
             maxLen = max(maxLen,r-l+1);
             mpp[s[r]] = r;
             r++;
        }
        return maxLen;
    }
};