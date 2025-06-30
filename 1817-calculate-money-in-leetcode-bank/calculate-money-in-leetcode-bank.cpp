class Solution {
public:
    int totalMoney(int n) {
         int weeks = n / 7;
        int days = n % 7;

        // Sum from complete weeks: 7 * (1 + 2 + ... + weeks) + 21 * weeks
        int weekSum = 7 * weeks * (weeks + 1) / 2 + 21 * weeks;

        // Sum from leftover days: days * (2*weeks + days + 1) / 2
        int daySum = days * (2 * weeks + days + 1) / 2;

        return weekSum + daySum;
    }
};