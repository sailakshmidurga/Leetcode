class Solution {
public:
    vector<int>findPse(vector<int>arr)
    {
        int n = arr.size();
        vector<int>pse(n);
        stack<int>st;
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            pse[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        return pse;
    }
    vector<int>findNse(vector<int>arr)
    {
        int n = arr.size();
        vector<int>nse(n,n);
        stack<int>st;
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                nse[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return nse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9+7;
        vector<int>pse = findPse(arr);
        vector<int>nse = findNse(arr);
        long sum = 0;
        for(int i = 0;i<n;i++)
        {
            long long left = (i - pse[i]);
            long long right = (nse[i] - i);
            long long prod = (left*right)%mod;
            sum = (sum + ((prod * arr[i])%mod))%mod;
        }
        return sum;
    }
};