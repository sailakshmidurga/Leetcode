class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         return atmost(nums,k) - atmost(nums,k-1);
    }
    private:
    int atmost(vector<int>&nums,int k)
    {
        if(k<0) return 0;
        int n = nums.size();
        int l = 0;
        int r = 0;
        int odd = 0;
        int count = 0;
        while(r<n)
        {
            if(nums[r]%2!=0)
            {
                odd++;
            }
            while(odd > k)
            {
                if(nums[l]%2!=0)
                {
                    odd--;
                }
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
};