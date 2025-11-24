class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
      vector<bool> res;
        int prefix = 0;  // keep track of current number modulo 5
        
        for (int bit : nums) {
            // shift left (multiply by 2) and add current bit
            prefix = ((prefix << 1) + bit) % 5;
            res.push_back(prefix == 0);
        }
        
        return res;  
    }
};