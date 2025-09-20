class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         unordered_map<int, int> prefixSumCount;
        int sum = 0, result = 0;
        prefixSumCount[0] = 1; // To handle subarrays that start from index 0

        for (int num : nums) {
            sum += num;
            // Check if there is a prefix sum that when removed gives 'goal'
            if (prefixSumCount.find(sum - goal) != prefixSumCount.end()) {
                result += prefixSumCount[sum - goal];
            }
            // Record the current prefix sum
            prefixSumCount[sum]++;
        }

        return result;
    }
};