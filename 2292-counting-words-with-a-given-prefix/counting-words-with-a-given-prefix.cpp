class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int res = 0;
        for(string w:words)
        {
            if(w.substr(0,n)==pref)
            {
                res++;
            }
        }
        return res;
    }
};