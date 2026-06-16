class Solution {
    public:
    bool isChar(char ch)
    {
        return (ch >= 'a' && ch <= 'z');
    }
public:
    string processStr(string s) {
        string result = "";
        for(char ch:s)
        {
            if(isChar(ch))
            {
                result += ch;
            }
            else if(ch == '#')
            {
                string dup = result;
                result += dup;
            }
            else if(ch == '*')
            {
                if(!result.empty())
                {
                    result.pop_back();
                }
            }
            else if(ch == '%')
            {
                reverse(result.begin(),result.end());
            }
        }
        return result;
    }
};