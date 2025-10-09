class Solution {
public:
    string toHex(int num) {
        char hexMap[16] = {
            '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'
        };
        string res;
        if(num == 0)
        {
            return "0";
        }
        unsigned int n = static_cast<unsigned int>(num);
        while(n!=0)
        {
            int digit = n&0xf;
             res+=hexMap[digit];
             n>>=4;
        }
        reverse(res.begin(),res.end());
    return res;
    }
};