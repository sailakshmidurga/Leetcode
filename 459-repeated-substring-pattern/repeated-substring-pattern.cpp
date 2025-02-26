class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> lps(n, 0);  // Longest Prefix Suffix array

        // Building the LPS array
        int len = 0;
        int i = 1;
        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // The length of the longest prefix which is also suffix
        int l = lps[n - 1];

        // Check if this length can divide the entire string length
        return(l != 0 && n % (n - l) == 0);
    }
};