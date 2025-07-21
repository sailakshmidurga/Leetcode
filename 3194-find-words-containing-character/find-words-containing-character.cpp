class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
         set<int>s;
     for(int i =0;i<n;i++)
     {
        for(char c:words[i])
        {

            if(c==x)
            {
                s.insert(i);
            }
        }
     }
     vector<int>ans(s.begin(),s.end());
     return ans;
    }
};