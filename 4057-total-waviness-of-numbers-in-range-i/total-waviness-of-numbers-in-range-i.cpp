class Solution {
    public:
    int waviness(int num)
    {
        string s = to_string(num);
        int cnt = 0;
        if(s.size() < 3)
        {
            return 0;
        }
        for(int i = 1;i<s.size()-1;i++)
        {
            //peak
            if(s[i] > s[i-1] && s[i] > s[i+1])
            {
                cnt++;
            }
            else if(s[i] < s[i-1] && s[i] < s[i+1])
            {
                cnt++;
            }
        }
        return cnt;
    }
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1;i<=num2;i++)
        {
            ans += waviness(i);
        }
        return ans;
    }
};