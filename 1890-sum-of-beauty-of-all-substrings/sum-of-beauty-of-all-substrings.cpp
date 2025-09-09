class Solution {
public:
    int beautySum(string s) {
       int n = s.length();
       int totalbeauty = 0;
       for(int i = 0;i<n;i++)
       {
        vector<int>freq(26,0);
        for(int j = i;j<n;j++)
        {
            freq[s[j]-'a']++;
            int maxFreq = 0;
            int minFreq = INT_MAX;
            for(auto f:freq)
            {
                if(f>0)
                {
                maxFreq = max(maxFreq,f);
                minFreq = min(minFreq,f);
                }
            }
            totalbeauty += maxFreq-minFreq;
        }
       } 
       return totalbeauty;
    }
};