class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>res;
        map<int,int>mpp;
        set<int>s;
        for(int i =0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[i].size();j++)
            {
                mpp[grid[i][j]]++;
            }
        }
        for(auto it:mpp)
        {
            if(it.second==2)
            {
                res.push_back(it.first);
                break;
            }
        }
        for(auto row:grid)
        {
            for(int num:row)
            {
            s.insert(num);
            }
        }
        for(int i=1;i<=n*n;i++)
        {
            if(s.find(i)==s.end())
            {
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};