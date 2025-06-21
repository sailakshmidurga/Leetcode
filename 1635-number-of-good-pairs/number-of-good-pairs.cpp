class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        int res = 0;
        for(int i =0;i<n;i++)
        {
            j = n-1;
            while(i<j)
            {
                if(nums[i]==nums[j])
                {
                    res++;
                }
                j--;
            }
        }
        return res;
    }
};