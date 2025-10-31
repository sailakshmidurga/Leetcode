class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second == 2)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};