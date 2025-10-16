class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size();
        int sume = 0,sumo = 0;
        for(int i = 0;i<n;i++)
        {
            if(i%2==0) sume+=num[i]-'0';
            else sumo+=num[i]-'0';
        }
        return(sume==sumo);
    }
};