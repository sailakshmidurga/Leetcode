class Solution {
public:
    int addDigits(int num) {
        int sume;
        while(num>=10)
        {
            sume = 0;
            while(num>0)
            {
                int r = num%10;
                sume+=r;
                num = num/10;
            }
            num = sume;
        }
        return sume;
    }
};