class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string res="";
        unordered_set<char>mp;
        string maxi="";
        for(int i =0;i<s.length();i++)
        {
            res = "";
            mp.clear();
            for(int j = i;j<s.length();j++)
            {
                if(mp.find(s[j])!=mp.end())
            {
                break;
            }
            res += s[j];
            mp.insert(s[j]);
            }
            maxi = res.size() > maxi.size() ? res:maxi;
        }
        return maxi.size();
    }
};