class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i = 0;i<n;i++)
        {
            int noneed = target - nums[i];
            if(mpp.find(noneed) != mpp.end())
            {
                return {i,mpp[noneed]};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};