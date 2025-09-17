class Solution {
public:
    bool wordPattern(string pattern, string s) {
         vector<string> words;
    istringstream iss(s);
    string word;

    // Split the string `s` into words
    while (iss >> word) {
        words.push_back(word);
    }

    // If lengths don't match, return false
    if (pattern.length() != words.size()) {
        return false;
    }

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for (int i = 0; i < pattern.length(); ++i) {
        char c = pattern[i];
        string w = words[i];

        // Check if mapping exists and is consistent
        if (charToWord.count(c)) {
            if (charToWord[c] != w) {
                return false;
            }
        } else {
            if (wordToChar.count(w)) {
                return false; // word already mapped to another character
            }
            charToWord[c] = w;
            wordToChar[w] = c;
        }
    }

    return true;
    }
};