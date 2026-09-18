class Solution {
public:
    bool isThree(int n) {
        int cnt = 0;
        for(int i = 1;i<=n;i++)
        {
            if(n%i == 0)
            {
                cnt++;
            }
        }
        cout<<cnt;
        return (cnt == 3)?true:false;
    }
};