class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        map<int,int>mpp;
        vector<int>res;
        vector<int>extras;
        for(int i =0;i<n;i++)
        {
            mpp[arr1[i]]++;
        }
        for(int i =0;i<m;i++)
        {
            while(mpp[arr2[i]]>0)
            {
                res.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
            mpp.erase(arr2[i]);
        }
        for(auto [key,count]:mpp)
        {
            for(int i =0;i<count;i++)
            {
                extras.push_back(key);
            }
        }
        sort(extras.begin(),extras.end());
        res.insert(res.end(),extras.begin(),extras.end());
        return res;
    }
};