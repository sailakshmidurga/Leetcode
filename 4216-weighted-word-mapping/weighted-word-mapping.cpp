class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        unordered_map<char,int>mpp;
        for(char ch = 'a';ch<= 'z';ch++)
        {
            mpp[ch] = weights[ch - 'a'];
        }
        for(int i = 0;i<words.size();i++)
        {
            int num = 0;
            for(int j = 0;j<words[i].size();j++)
            {
                num += mpp[words[i][j]];
            }
            int modulo = num % 26;
            cout<<modulo;
            res += ('z' - modulo);
        }
        return res;
    }
};