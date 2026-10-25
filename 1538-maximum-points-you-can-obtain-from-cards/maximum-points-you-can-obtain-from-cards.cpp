class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ls = 0;
        int rs = 0;
        for(int i = 0;i<k;i++)
        {
            ls += cardPoints[i];
        }
        int rightIndex = n-1;
        int maxSum = ls;
        for(int i = k-1;i>=0;i--)
        {
            ls -= cardPoints[i];
            rs += cardPoints[rightIndex--];
            maxSum = max(maxSum,ls+rs);
        }
        return maxSum;
    }
};