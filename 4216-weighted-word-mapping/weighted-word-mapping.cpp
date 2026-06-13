class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(int i = 0;i<words.size();i++)
        {
            int num = 0;
            for(int j = 0;j<words[i].size();j++)
            {
                num += weights[words[i][j] - 'a'];
            }
            int modulo = num % 26;
            cout<<modulo;
            res += ('z' - modulo);
        }
        return res;
    }
};