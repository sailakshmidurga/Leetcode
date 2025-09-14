class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        int res = -1;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i =0;i<n;i++)
        {
            if(find(nums.begin(),nums.end(),-nums[i])!=nums.end())
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};