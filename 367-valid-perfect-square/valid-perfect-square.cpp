class Solution {
public:
    bool isPerfectSquare(int num) {
        bool res = false;
        if(num < 1)
        {
            return false;
        }
        long long left = 1, right = num;
        while(left<=right)
        {
            long long mid = (left+right)/2;
            long long square = mid*mid;
            if(square == num)
            {
                res = true;
                break;
            }
            else if(square < num)
            {
                left = mid+1;
            }
            else if(square > num)
            {
                right = mid-1;
            }
        }
        return res;
    }
};