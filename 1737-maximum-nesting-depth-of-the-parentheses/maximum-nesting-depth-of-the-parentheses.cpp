class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int max_depth = 0;
        for (char c : s) {
            if (c == '(') {
                open++;
                max_depth = max(max_depth, open);
            } 
            else if (c == ')') {
                open--;
            }
        }
        return max_depth;
    }
};