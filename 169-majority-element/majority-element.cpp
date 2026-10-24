class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int res = 0;
        int n = nums.size();
        for(int num : nums)
        {
            mpp[num]++;
        }   
        for(auto it:mpp)
        {
            if(it.second > (n/2))
            {
                res = it.first;
                break;
            }
        }
        return res;
    }
};