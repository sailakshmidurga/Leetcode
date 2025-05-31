class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int sumpos = 0;
        int sumneg = 0;
        int sume = 0;
        int res = 0;
        while(i<n)
        {
            if(nums[i]>0){
            sumpos +=nums[i];
            }            
            else
            {
                sumneg +=nums[i];
            }
            sume = sumpos+sumneg;
            if(sume == 0)
            {
                res++;
                sumpos = 0;
                sumneg = 0;
            }
            i++;
        }
        return res;
    }
};