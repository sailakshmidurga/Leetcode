class Solution {
public:
    string largestOddNumber(string num) {
        string res = "";
          for (int i = num.size() - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        if (digit % 2 != 0) {
            // Return substring from start to this odd digit (inclusive)
           res =  num.substr(0, i + 1);
           break;
        }
    }
    // No odd digit found → return empty string
    return res;
    }
};