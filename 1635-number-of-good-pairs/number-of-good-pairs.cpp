class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int cnt = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(mpp.find(nums[i]) != mpp.end())
            {
                cnt += mpp[nums[i]];
            }
                mpp[nums[i]]++;
        }
        return cnt;
    }
};