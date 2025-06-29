class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sume = 0;
        int cnt = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0)
            {
                sume+=nums[i];
                cnt++;
            }
        }
        if(cnt==0)
        {
            return 0;
        }
        int avg = sume/cnt;
        return avg;
    }
};