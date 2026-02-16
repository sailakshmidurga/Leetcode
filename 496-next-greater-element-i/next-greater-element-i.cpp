class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n = nums1.size();
        int m = nums2.size();
        bool done = 0;
        for(int i = 0;i<n;i++)
        {
            done = 0;
            for(int j = 0;j<m;j++)
            {
                if(nums1[i] == nums2[j])
                {
                   for(int k = j+1;k<m;k++)
                   {
                    if(nums2[k]>nums2[j])
                    {
                        ans.push_back(nums2[k]);
                        done = true;
                        break;
                    }
                   }
                   if(!done) ans.push_back(-1);
                   break;
                }
            }
        }
        return ans;
    }      
};