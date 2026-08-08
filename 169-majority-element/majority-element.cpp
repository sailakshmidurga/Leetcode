class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int s = n/2;
        unordered_map<int,int>mpp;
        for(int i = 0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int maxCount = 0;
        int maxDigit = 0;
        for(auto it:mpp)
        {
            if(it.second > s)
            {
                maxDigit = it.first;
                maxCount = it.second;
            }
        }
        return maxDigit;
    }
};