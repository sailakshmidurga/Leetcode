class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string res;
        int n = s.size();
        int firstword = true;
        int i = n-1;
        while(i >=0)
        {
          while(i>=0 && s[i] == ' ')
            {
                i--;
            }
            if(i<0) break;
            while(i>= 0 && s[i]!= ' ')
            {
                temp.push_back(s[i]);
                i--;
            }
            reverse(temp.begin(),temp.end());
            if(firstword)
            {
                res += temp;
                firstword = false;
            }
            else
            {
                res += " ";
                res += temp;
            }
            temp.clear();
        }
        return res;
    }
};