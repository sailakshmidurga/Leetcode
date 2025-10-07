class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1); 
        unordered_map<int, int> lakeLastRain;
        set<int> dryDays; 
        for (int i = 0; i < n; ++i) {
            if (rains[i] > 0) {
                int lake = rains[i];
                if (lakeLastRain.count(lake)) {
                   
                    auto it = dryDays.lower_bound(lakeLastRain[lake]);
                    if (it == dryDays.end()) {
                        return {}; 
                    }
                    ans[*it] = lake; 
                    dryDays.erase(it); 
                }
                lakeLastRain[lake] = i;
                ans[i] = -1; 
            } else {
                dryDays.insert(i); 
               
            }
        }
        return ans;
 
    }
};