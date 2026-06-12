class Solution {
    public:
    double solve(double x,long long n,double ans)
    {
        if(n == 0) return ans;

        if(n%2==0)
        {
            return solve(x*x,n/2,ans);
        }
            return solve(x,n-1,x*ans);
    }
public:
    double myPow(double x, int n) {
        long long m = n;
        if(m<0)
        {
            m = -m;
        }
        double ans = solve(x,m,1.0);
        return (n<0)?(1.0/ans):ans;
    }
};