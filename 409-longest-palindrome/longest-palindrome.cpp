class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        int length = 0;
        bool odd_found = false;
        for (auto [c, count] : freq) {
            if (count % 2 == 0) {
                length += count;
            } else {
                length += count - 1;  // use even part
                odd_found = true;
            }
        }
        if (odd_found) length += 1; // place one odd in center
        return length;

        
    }
};