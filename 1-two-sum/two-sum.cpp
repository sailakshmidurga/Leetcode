class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
         unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int no=nums[i];
            int noneed = target-no;
            if(mpp.find(noneed)!=mpp.end())
            {
                return {mpp[noneed],i};
            }
            mpp[no]=i;
        }
        return {-1,-1};
    }
};