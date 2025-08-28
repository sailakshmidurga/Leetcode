class Solution {
public:
    string frequencySort(string s) {
          unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Create buckets (index = frequency)
        int n = s.size();
        vector<vector<char>> bucket(n + 1);
        for (auto &p : freq) {
            bucket[p.second].push_back(p.first);
        }

        // Step 3: Build result string from high freq to low
        string result;
        for (int i = n; i >= 1; i--) {
            for (char c : bucket[i]) {
                result.append(i, c);  // repeat char 'i' times
            }
        }
        return result;
    }
};