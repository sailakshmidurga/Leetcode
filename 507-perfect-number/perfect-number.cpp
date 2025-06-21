class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sume = 0;
        for(int i =1;i<num;i++)
        {
            if(num%i==0)
            {
                sume+=i;
            }
        }
       return (num==sume?true:false);
    }
};