class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int freq;
        int j = 0;
        for(int i = 1;i<n;i+=2)
        {
            freq = nums[j];
            while(freq>0)
            {
                ans.push_back(nums[i]);
                freq--;
            }
            j+=2;
        }
        return ans;
    }
};