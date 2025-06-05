class Solution {
public:
    bool isAnagram(string s, string t) {
        bool res = true;
        map<int,int>mpp1;
        map<int,int>mpp2;
        for(char c:s)
        {
            mpp1[c]++;
        }
        for(char c:t)
        {
            mpp2[c]++;
        }
        for(char c:s)
        {
            if(t.find(c)==string::npos)
            {
                res = false;
            }
            if(mpp1[c]!=mpp2[c]){
                res = false;
                break;
                }
        }
        for(char c:t)
        {
            if(s.find(c)==string::npos)
            {
                res = false;
            }
            if(mpp1[c]!=mpp2[c]){
                res = false;
                break;
                }
        }
        return res;
    }
};