class Solution {
public:
    int maxDifference(string s) {
        map<char,int>mpp;
        for(char c:s)
        {
            mpp[c]++;
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(auto it:mpp)
        {
            if(it.second%2==0)
            {
            mini = min(mini,it.second);
            }
            else{
            maxi = max(maxi,it.second);
            }
        }
        int res = maxi - mini;
        return res;
    }
};