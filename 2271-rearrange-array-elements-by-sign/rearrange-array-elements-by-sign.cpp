class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int>p;
      vector<int>s;
      vector<int>q;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                s.push_back(nums[i]);
            }
            else
            {
                q.push_back(nums[i]);
            }
        }
        for(int i = 0;i<s.size();i++)
        {
         p.push_back(s[i]);
         p.push_back(q[i]);   
        }
    return p;
    }
};