class Solution {
public:
    int sumBase(int n, int k) {
        int r;
        int rev = 0;
        int rev1 = 0;
        int sume = 0;
        
        while(n>0)
        {
            r = n%k;
            rev = rev*10+r;
            sume+=r;
            n = n/k;
        }
        // while(rev>0)
        // {
        //     int r = rev%10;
        //     rev1 = rev1*10+r;
        //     rev = rev/10;
        // }

        return sume;
    }
};