class Solution {
    public:
    int mod = 1e9+7;
    long long power(long long x,long long n,long long ans)
    {
        if(n == 0) return ans;
        if(n%2 == 1)
        {
            return power(x,n-1,(ans*x)%mod);
        }
        return power((x*x)%mod,n/2,ans);
    }
public:
    int countGoodNumbers(long long n) {
        long long even_positions = (n+1)/2;
        long long odd_positions = n/2;

        return (power(5,even_positions,1)* power(4,odd_positions,1))%mod;
    }
};