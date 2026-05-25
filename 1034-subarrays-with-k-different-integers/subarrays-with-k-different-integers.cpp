class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // Your code goes here
       return atmost(nums,k) - atmost(nums,k-1);
    }
private:
    int atmost(vector<int>&s,int k)
    {
        if(k<0) return 0;
         int n = s.size();
        int l = 0;
        int r = 0;
        int count = 0;
        unordered_map<int,int>mp;
        while(r<n)
        {
            mp[s[r]]++;
            while(mp.size() > k)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
};