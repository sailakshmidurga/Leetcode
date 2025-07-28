class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(s.begin(),s.end());
       sort(g.begin(),g.end());
       int content = 0;
       int i = 0;
       int j = 0;
       while(j<s.size() && i<g.size())
       {
        if(s[j]>=g[i])
        {
            content++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
       }
       return content;
    }
};