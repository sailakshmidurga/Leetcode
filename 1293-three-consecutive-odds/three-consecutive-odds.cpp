class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3)
        {
            return false;
        }
        int cnt = 0;
        bool res = 0;
        for(int i =0;i<arr.size()-2;i++)
        {
            cnt = 0;
            for(int j =i;j<=i+2;j++)
            {
                if(arr[j]%2!=0)
                {
                    cnt++;
                }
            }
            if(cnt == 3)
            {
               res = true;
               break;
            }
        }
        return res;
    }
};