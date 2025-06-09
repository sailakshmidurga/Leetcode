class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        int n = candyType.size();
        int check = n/2;
        for(int i =0;i<candyType.size();i++)
        {
            s.insert(candyType[i]);
        }
        int res = s.size();
        for(int i =0;i<n;i++)
        {
            if(res > check)
            {
                res--;
            }
        }
        return res;
    }
};