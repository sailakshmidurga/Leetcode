class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i = 0;
        while(i<n)
        {
            if(i==n-1) return true;
            if(bits[i]==0)
            {
                i++;
            }
            else
            {
                i = i+2;
            }
        }
        return false;
    }
};