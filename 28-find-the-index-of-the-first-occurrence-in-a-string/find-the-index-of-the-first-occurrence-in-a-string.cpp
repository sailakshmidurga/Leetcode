class Solution {
public:
    int strStr(string haystack, string needle) {
       int h = haystack.size();
       int m = needle.size();
       int res = -1;
      for(int i = 0;i<h;i++)
      {
         if(haystack[i]==needle[0])
         {
            string s = haystack.substr(i,m);
            if(s==needle)
            {
                res = i;
                break;
            }
         }
      }
      return res;
    }
};