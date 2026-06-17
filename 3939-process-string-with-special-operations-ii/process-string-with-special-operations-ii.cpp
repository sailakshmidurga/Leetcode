class Solution {
public:
    char processStr(string s, long long k) {

        int n = s.size();

        vector<long long> len(n);

        long long curr = 0;

        // Forward pass
        for(int i = 0; i < n; i++)
        {
            char ch = s[i];

            if(ch >= 'a' && ch <= 'z')
            {
                curr++;
            }
            else if(ch == '*')
            {
                if(curr > 0)
                    curr--;
            }
            else if(ch == '#')
            {
                curr *= 2;
            }
            // %
            // length unchanged

            len[i] = curr;
        }

        if(k >= curr)
        {
            return '.';
        }

        // Backward pass
        for(int i = n - 1; i >= 0; i--)
        {
            char ch = s[i];

            long long after = len[i];

            if(ch >= 'a' && ch <= 'z')
            {
                long long before = after - 1;

                if(k == before)
                {
                    return ch;
                }

                curr = before;
            }
            else if(ch == '*')
            {
                curr = after + 1;
            }
            else if(ch == '#')
            {
                curr = after / 2;

                k %= curr;
            }
            else // %
            {
                if(after > 0)
                {
                    k = after - 1 - k;
                }
            }
        }

        return '.';
    }
};