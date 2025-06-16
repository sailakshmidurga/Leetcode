class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string s1;
        bool res = false;
        for(int i = 0;i<words.size();i++)
        {
            s1+=words[i];
            if(s1==s)
            {
                res= true;
                break;
            }
        }
        return res;
    }
};