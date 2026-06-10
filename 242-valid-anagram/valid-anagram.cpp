class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        bool res = true;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;

        for(char c:s)
        {
            mpp1[c]++;
        }
        for(char c: t)
        {
            mpp2[c]++;
        }
        for(char c:s)
        {
            if(t.find(c) == string::npos)
            {
                res = false;
                break;
            }
            if(mpp1[c]!=mpp2[c])
            {
                res = false;
                break;
            }
        }
        for(char c:t)
        {
            if(s.find(c) == string::npos)
            {
                res = false;
                break;
            }
            if(mpp1[c]!=mpp2[c])
            {
                res = false;
                break;
            }
        }
        return res;
    }
};