class Solution {
public:
    int hammingWeight(int n) {
             string s = "";
        int cnt = 0;
        while(n>0)
        {
            int r = n%2;
            s+=(r +'0');
            n  = n/2;
        }
       for(char c:s)
       {
        if(c=='1')
        {
            cnt++;
        }
       } 
       return cnt;
    }
};