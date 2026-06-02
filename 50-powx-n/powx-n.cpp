class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long m = n;
        if(n<0) m=-m;
        while(m!=0)
        {
            if(m%2==0)
            {
                x = x*x;
                m = m/2;
            }
            else
            {
                ans *= x;
                m = m-1;
            }
        }
        return (n<0)?1.0/ans:ans;
    }
};