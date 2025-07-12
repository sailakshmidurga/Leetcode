class Solution {
public:
    int scoreOfString(string s) {
        int sume = 0;
        int n = s.size();
        for(int i = 0;i<n-1;i++)
        {
            sume += abs(s[i]-s[i+1]);
        }
         return sume;
   
    }
};