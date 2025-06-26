class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt_res = 0;
        for(int i :nums)
        {
            int cnt = 0;
            while(i>0)
            {
                cnt++;
                i/=10;
            }
            if(cnt%2==0)
            {
                cnt_res++;
            }
        }
        return cnt_res;
    }
};