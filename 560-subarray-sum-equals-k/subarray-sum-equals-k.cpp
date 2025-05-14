class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>p;
        int cnt = 0;
        int sume  = 0;
        p.resize(nums.size()+1);
        p[0] = 0;
        for(int i =1;i<=nums.size();i++)
        {
            p[i] = p[i-1]+nums[i-1];
        }
        for(int  i =0;i<nums.size();i++)
        {
            for(int j = i;j<nums.size();j++)
            {
                sume = 0;
                sume = p[j+1]-p[i];
                if(sume==k)
                {
                    cnt+=1;
                }
            }
        }
        return cnt;
    }
};