class Solution {
public:
    int numSub(string s) {
        const int MOD = 1e9 + 7;
    long long count = 0;
    int currentOnes = 0;

    for (char c : s) {
        if (c == '1') {
            currentOnes++;
        } else {
            count = (count + 1LL * currentOnes * (currentOnes + 1) / 2) % MOD;
            currentOnes = 0;
        }
    }

    // Add the last block of 1s
    count = (count + 1LL * currentOnes * (currentOnes + 1) / 2) % MOD;

    return count;

    }
};