class Solution {
public:
    string expandAroundCenter(string s,int left,int right)
    {
        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        string longest = "";
        for(int i = 0;i<n;i++)
        {
            string oddLength = expandAroundCenter(s,i,i);
            string evenLength = expandAroundCenter(s,i,i+1);
            if(oddLength.length() > longest.size()) longest = oddLength;
            if(evenLength.length() > longest.size()) longest = evenLength;
        }
        return longest;
    }
};