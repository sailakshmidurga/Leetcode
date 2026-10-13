class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(int n:gifts)
        {
            pq.push(n);
        }
        while(k--)
        {
            int x = pq.top();
            pq.pop();
            int y = floor(sqrt(x));
            pq.push(y);
        }
        long long sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};