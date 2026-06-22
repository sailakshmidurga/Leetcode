class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mpp;
        for(char ch:text)
        {
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n')
            {
                mpp[ch]++;
            }
        }
        int count_b = mpp['b'];
        int count_a = mpp['a'];
        int count_l = mpp['l']/2;
        int count_o = mpp['o']/2;
        int count_n = mpp['n'];
        return min({count_a,count_b,count_l,count_o,count_n});
    }
};