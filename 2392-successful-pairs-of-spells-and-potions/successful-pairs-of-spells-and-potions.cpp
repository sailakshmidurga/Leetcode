class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int i =0;i<n;i++)
        {
            long long threshold = (success+spells[i]-1)/spells[i];
            int idx = lower_bound(potions.begin(),potions.end(),threshold)-potions.begin();
          ans.push_back(m-idx);  
        }
        return ans;
    }
};