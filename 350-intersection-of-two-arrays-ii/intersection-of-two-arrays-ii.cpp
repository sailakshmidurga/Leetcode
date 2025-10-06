class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>res;
        for(int i = 0;i<n2;i++)
        {
            for(int j = 0;j<n1;j++)
            {
                if(nums2[i]==nums1[j])
                {
                    res.push_back(nums1[j]);
                    nums1[j] = -1;
                    break;
              
                }
            }
        }
        return res;
    }
};