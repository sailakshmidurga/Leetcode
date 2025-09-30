class Solution {
public:
    int thirdMax(vector<int>& nums) {
      set<int>s;
      for(int i = 0;i<nums.size();i++)
      {
        s.insert(nums[i]);
      } 
      vector<int>ans(s.begin(),s.end()); 
      if(ans.size()>=3)
      {
        return ans[ans.size()-3];
      }
      else
      {
        return ans[ans.size()-1];
      }
      return 0;
    }
};