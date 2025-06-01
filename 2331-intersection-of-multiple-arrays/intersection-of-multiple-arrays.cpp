class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int>res;
        for(int i = 0;i<nums.size();i++)
        {

                sort(nums[i].begin(),nums[i].end());
        }
       unordered_map<int,int>mpp; 
       for(int i =0;i<nums.size();i++)
       {
        for(int num:nums[i])
        {
            mpp[num]++;
        }
       }
       for(auto it:mpp)
       {
        if(it.second==n)
        {
            res.push_back(it.first);
        }
       }
       sort(res.begin(),res.end());
       return res;
    }
};