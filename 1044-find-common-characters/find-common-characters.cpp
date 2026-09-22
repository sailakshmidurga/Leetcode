class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        unordered_map<char,int>mpp;
        string s = words[0];
        for(char ch:s)
        {
            mpp[ch]++;
        }
        for(int i = 1;i<words.size();i++)
        {
            unordered_map<char,int>minFreq;
            for(char ch:words[i])
            {
                minFreq[ch]++;
            }
            for(auto &it:mpp)
            {
                char ch = it.first;
                if(minFreq.find(ch) == minFreq.end())
                {
                    it.second = 0;
                }
                else
                {
                    it.second = min(it.second,minFreq[ch]);
                }
            }
        }
        vector<string>ans;
        for(auto it:mpp)
        {
            for(int i = 0;i<it.second;i++)
            {
                ans.push_back(string(1,it.first));
            }
        }
        return ans;
    }
};