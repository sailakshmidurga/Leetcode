class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_set<char>st;
        for(char c:s)
        {
            st.insert(c);
        }
        int maxLength = 0;
        for(char target:st)
        {
            int changes = 0;
            int l = 0;
            int r = 0;
            while(r<n)
            {
                if(s[r] != target)
                {
                    changes++;
                }
                while(changes > k)
                {
                    if(s[l] != target)
                    {
                        changes--;
                    }
                    l++;
                }
                maxLength = max(maxLength,r-l+1);
                r++;
            }
        }
        return maxLength;
    }
};