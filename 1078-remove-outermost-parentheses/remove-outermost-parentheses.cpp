class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0;
        int n = s.length();
        string temp;
        string res;
        for(char c : s)
        {
            if(c == '(')
            {
                depth++;
                if(depth>1)
                {
                    temp.push_back(c);
                }
            }
           else if(c == ')')
            {
                depth--;
                if(depth>0)
                {
                    temp.push_back(c);
                }
                 else if(depth == 0)
                {
                    res+=temp;
                    temp = "";
                }
            }
        }
        return res;
    }
};