class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> mpp;

        // Add values from nums1
        for (auto& pair : nums1) {
            mpp[pair[0]] += pair[1];
        }

        // Add values from nums2
        for (auto& pair : nums2) {
            mpp[pair[0]] += pair[1];
        }

        // Convert map to sorted result
        vector<vector<int>> ans;
        for (auto& [key, value] : mpp) {
            ans.push_back({key, value});
        }

        sort(ans.begin(), ans.end()); // Optional: sort by key

        return ans;
   
    }
};