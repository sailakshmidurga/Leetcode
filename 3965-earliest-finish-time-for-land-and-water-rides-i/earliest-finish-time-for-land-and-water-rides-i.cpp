class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterDuration.size();
        int res = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                int mini = landStartTime[i]+landDuration[i];
                int water = max(mini,waterStartTime[j]);
                int finish1 = water + waterDuration[j];

                int mini1 = waterStartTime[j]+waterDuration[j];
                int land = max(mini1,landStartTime[i]);
                int finish2 = land + landDuration[i];
                res = min(res,min(finish1,finish2));
            }
        }
        return res;
    }
};