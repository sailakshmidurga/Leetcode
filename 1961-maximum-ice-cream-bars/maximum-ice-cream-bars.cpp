class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int total = 0;
        int cnt = 0;
        for(int num:costs)
        {
            if(num + total <= coins)
            {
                total += num;
                cnt++;
            }
        }
        return cnt;
    }
};