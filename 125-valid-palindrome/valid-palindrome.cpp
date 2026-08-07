class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char c:s)
        {
            if(isalnum(c))
            {
                ans += tolower(c);
            }
        }
        
        string str;
        str = ans;
        reverse(str.begin(),str.end());
        return (ans == str);
    }
};