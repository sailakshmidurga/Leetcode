class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        int cnt = 0;
        vector<int>prime(n+1,1);
        prime[0] = 0, prime[1] = 0;
        int limit = sqrt(n);
        for(int i = 2;i<=limit;i++)
        {
            if(prime[i]==1)
            {
                for(int j = i*i;j<=n;j+=i)
                {
                    prime[j] = 0;
                }
            }
        }
        for(int i = 2;i<n;i++)
        {
            if(prime[i]==1) cnt++;
        }
        return cnt;
    }
};