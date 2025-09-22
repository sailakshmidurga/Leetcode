class Solution {
public:
     
vector<int> countFreq(const string& word) {
    vector<int> freq(26, 0);
    for (char c : word) {
        freq[c - 'a']++;
    }
    return freq;
}

vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    // Step 1: Build max frequency requirement from words2
    vector<int> maxFreq(26, 0);
    for (const string& word : words2) {
        vector<int> freq = countFreq(word);
        for (int i = 0; i < 26; ++i) {
            maxFreq[i] = max(maxFreq[i], freq[i]);
        }
    }

    // Step 2: Check each word in words1
    vector<string> result;
    for (const string& word : words1) {
        vector<int> freq = countFreq(word);
        bool isUniversal = true;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] < maxFreq[i]) {
                isUniversal = false;
                break;
            }
        }
        if (isUniversal) {
            result.push_back(word);
        }
    }

    return result;

    }
};