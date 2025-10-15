class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
       vector<string>res(n);
       vector<int>copy(score.begin(),score.end());
       sort(copy.begin(),copy.end(),greater<int>());
       unordered_map<int,string>mpp;
       for(int i = 0;i<n;i++)
       {
              if(i == 0) mpp[copy[i]] = "Gold Medal";
              else if(i==1) mpp[copy[i]] = "Silver Medal";
              else if(i==2) mpp[copy[i]] = "Bronze Medal";
              else  mpp[copy[i]] = to_string(i+1);
       } 
       for(int i = 0;i<n;i++)
       {
        res[i] = mpp[score[i]];
       }
       return res;
    }
};