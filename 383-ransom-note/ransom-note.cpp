class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> charCount(26, 0);  // For 'a' to 'z'

    // Count each character in magazine
    for (char c : magazine) {
        charCount[c - 'a']++;
    }

    // Subtract for each character in ransomNote
    for (char c : ransomNote) {
        if (--charCount[c - 'a'] < 0) {
            return false;  // Not enough characters
        }
    }

    return true;
    }
};