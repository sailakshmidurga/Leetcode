class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i =1;i<n;i++)
        {
            // if(i==0 && nums[i]>nums[i+1])
            // {
            //     nums[i+1]++;
            // }
            // else if(i==n-1 && nums[i]<nums[i-1]){
            //     nums[i]++
            // }
            if(nums[i]<=nums[i-1])
            {
                int diff = abs(nums[i]-nums[i-1])+1;
                nums[i]=nums[i]+diff;
                cnt+=diff;
            }
        }
        return cnt;
    }
};