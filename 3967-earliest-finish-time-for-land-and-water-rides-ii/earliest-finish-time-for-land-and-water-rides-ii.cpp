class Solution {
public:

    int query(int x,
              vector<pair<int,int>>& rides,
              vector<int>& prefMinDur,
              vector<int>& suffMinSD)
    {
        int m = rides.size();

        int pos = upper_bound(
            rides.begin(),
            rides.end(),
            make_pair(x, INT_MAX)
        ) - rides.begin();

        int ans = INT_MAX;

        // starts <= x
        if(pos > 0)
        {
            ans = min(ans,
                      x + prefMinDur[pos - 1]);
        }

        // starts > x
        if(pos < m)
        {
            ans = min(ans,
                      suffMinSD[pos]);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        vector<pair<int,int>> water;
        vector<pair<int,int>> land;

        for(int i = 0; i < m; i++)
        {
            water.push_back({
                waterStartTime[i],
                waterDuration[i]
            });
        }

        for(int i = 0; i < n; i++)
        {
            land.push_back({
                landStartTime[i],
                landDuration[i]
            });
        }

        sort(water.begin(), water.end());
        sort(land.begin(), land.end());

        vector<int> prefWaterDur(m);
        vector<int> suffWaterSD(m);

        prefWaterDur[0] = water[0].second;

        for(int i = 1; i < m; i++)
        {
            prefWaterDur[i] =
                min(prefWaterDur[i - 1],
                    water[i].second);
        }

        suffWaterSD[m - 1] =
            water[m - 1].first +
            water[m - 1].second;

        for(int i = m - 2; i >= 0; i--)
        {
            suffWaterSD[i] =
                min(suffWaterSD[i + 1],
                    water[i].first +
                    water[i].second);
        }

        vector<int> prefLandDur(n);
        vector<int> suffLandSD(n);

        prefLandDur[0] = land[0].second;

        for(int i = 1; i < n; i++)
        {
            prefLandDur[i] =
                min(prefLandDur[i - 1],
                    land[i].second);
        }

        suffLandSD[n - 1] =
            land[n - 1].first +
            land[n - 1].second;

        for(int i = n - 2; i >= 0; i--)
        {
            suffLandSD[i] =
                min(suffLandSD[i + 1],
                    land[i].first +
                    land[i].second);
        }

        int ans = INT_MAX;

        // Land -> Water
        for(int i = 0; i < n; i++)
        {
            int landFinish =
                landStartTime[i] +
                landDuration[i];

            ans = min(
                ans,
                query(
                    landFinish,
                    water,
                    prefWaterDur,
                    suffWaterSD
                )
            );
        }

        // Water -> Land
        for(int j = 0; j < m; j++)
        {
            int waterFinish =
                waterStartTime[j] +
                waterDuration[j];

            ans = min(
                ans,
                query(
                    waterFinish,
                    land,
                    prefLandDur,
                    suffLandSD
                )
            );
        }

        return ans;
    }
};