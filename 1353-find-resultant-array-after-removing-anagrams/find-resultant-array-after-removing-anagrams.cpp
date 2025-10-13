class Solution {
    public:
    bool isAnagram(string a,string b)
    {
        string sa = a;
        string sb = b;
        if(sa.size()!=sb.size()) return false;
        sort(sa.begin(),sa.end());
        sort(sb.begin(),sb.end());
        return sa==sb;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>result;
      for(string &word:words)
      {
        if(!result.empty() && isAnagram(result.back(),word))
        {
            continue;
        }
            result.push_back(word);
      }
      return result;
    }
};