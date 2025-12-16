class Solution {
public:
    double myPow(double x, int n) {
        long long m = n;
        if(m<0) m = -m;
        double ans = 1.0;
        while(m!=0)
        {
        if(m%2!=0)
        {
            ans *= x;
            m = m-1;
        }
        else
        {
            x = x*x;
            m = m/2;
        }
        }
        if(n<0)   ans = 1.0/ans;
        return ans; 
    }
};