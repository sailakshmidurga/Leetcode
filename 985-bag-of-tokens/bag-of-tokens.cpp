class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int l = 0;
        int r = n-1;
        int score = 0;
        int maxScore = 0;
        while(l<=r)
        {
            if(power >= tokens[l])
            {
                score += 1;
                power -= tokens[l];
                l++;
                maxScore = max(maxScore,score);
            }
            else if(score >= 1)
            {
                score -= 1;
                power += tokens[r];
                r--;
            }
            else break;
        }
        cout<<maxScore;
        return maxScore;
    }
};