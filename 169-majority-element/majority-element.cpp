class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int n=nums.size();
            int r=0;
            int s = n/2;
            unordered_map<int,int>mpp;
            for(int i=0;i<n;i++)
            {
                mpp[nums[i]]++;
            }
            int maxcount=0;
            int maxdigit=0;
            for(auto it:mpp)
            {
                // if(it.second>maxcount)
                // {
                //     maxcount = it.second;
                //     maxdigit = it.first;
                // }
                if(it.second > s)
                {
                    maxdigit = it.first;
                }
            }
            return maxdigit;
    }
};