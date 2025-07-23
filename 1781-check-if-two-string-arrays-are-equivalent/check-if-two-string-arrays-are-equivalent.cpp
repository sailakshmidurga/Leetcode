class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res;
        string res2;
        for(string s:word1)
        {
            res+=s;
        }
        for(string s2:word2)
        {
            res2+=s2;
        }
        return (res==res2)?true:false;
    }
};