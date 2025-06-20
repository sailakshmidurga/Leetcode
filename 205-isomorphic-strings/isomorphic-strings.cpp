class Solution {
public:
    bool isIsomorphic(string s, string t) {
    bool res = true;
    int n1 = s.size();

    if (s.size() != t.size()) {
        return false;
    }

    map<char, char> mpp;
    map<char, char> mpp1;

    for (int i = 0; i < n1; i++) {
        // Check if s[i] is already mapped and is consistent
        if (mpp.count(s[i])) {
            if (mpp[s[i]] != t[i]) {
                res = false;
                break;
            }
        } else {
            mpp[s[i]] = t[i];
        }

        // Check if t[i] is already mapped and is consistent
        if (mpp1.count(t[i])) {
            if (mpp1[t[i]] != s[i]) {
                res = false;
                break;
            }
        } else {
            mpp1[t[i]] = s[i];
        }
    }

    return res;
}
};