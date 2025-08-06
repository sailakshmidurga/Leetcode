class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res;
        vector<int>arr1;
        arr1 = arr;
        sort(arr1.begin(),arr1.end());
        unordered_map<int,int>mpp;
        int rank = 1;
        for(int i = 0;i<arr.size();i++)
        {
            if(i==0 || arr1[i] !=arr1[i-1])
            {
            mpp[arr1[i]] = rank++;
            }
        }
        for(int i = 0;i<arr.size();i++)
        {
            res.push_back(mpp[arr[i]]);
        }
        return res;
    }
};