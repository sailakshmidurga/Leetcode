class Solution {
public:
    string reverseWords(string s) {
        string res;
        string temp;
        bool firstword = true;
        for(int i = s.length()-1;i>=0;i--)
        {
            if(s[i]==' ' || i == 0)
            {
               if(i == 0 && s[i]!=' ')
               {
                temp.push_back(s[i]);
               }
                reverse(temp.begin(),temp.end());
                if(!temp.empty())
                {
                if(!firstword)
                {
                    res+= ' ';
                }
                res+=temp;
                firstword = false;
                }
                temp = "";
            }
           else
           {
            temp.push_back(s[i]);
           }
        }
        return res;
    }
};