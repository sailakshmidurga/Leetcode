class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1 = 0;
        int ele2 = 0;
        for(int num:nums)
        {
            if(num == ele1)
            {
                cnt1++;
            }
            else if(num == ele2)
            {
                cnt2++;
            }
            else if(cnt1 == 0)
            {
                ele1 = num;
                cnt1 = 1;
            }
            else if(cnt2 == 0)
            {
                ele2 = num;
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
         cnt1 = 0;
         cnt2 = 0;
        for(int num:nums)
        {
            if(num == ele1)
            {
                cnt1++;
            }
            else if(num == ele2)
            {
                cnt2++;
            }
        }
        vector<int>ans;
        int k = nums.size()/3;
        if(cnt1 > k)
        {
            ans.push_back(ele1);
        }
        if(cnt2 > k)
        {
            ans.push_back(ele2);
        }
        return ans;
    }
};