class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> simplified;
    simplified.push_back(nums[0]);

    // Step 1: Remove consecutive duplicates
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            simplified.push_back(nums[i]);
        }
    }

    // Step 2: Count hills and valleys
    int count = 0;
    for (int i = 1; i < simplified.size() - 1; ++i) {
        if (simplified[i] > simplified[i - 1] && simplified[i] > simplified[i + 1]) {
            ++count; // Hill
        } else if (simplified[i] < simplified[i - 1] && simplified[i] < simplified[i + 1]) {
            ++count; // Valley
        }
    }

    return count;
    }
};