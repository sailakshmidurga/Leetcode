class Solution {
public:
    vector<int>findNse(vector<int>arr,int n)
    {
        vector<int>nse(n);
        stack<int>st;
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()] > arr[i])
            {
                st.pop();
            }
            nse[i] = st.empty()?n:st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int>findPse(vector<int>arr,int n)
    {
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

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int>nse = findNse(arr,n);
        vector<int>pse = findPse(arr,n);
        long sum = 0;
        int mod = 1e9+7;
        for(int i = 0;i<n;i++)
        {
            long long left = i - pse[i];
            long long right = nse[i] - i;

            long long prod = (left*right)%mod;
            prod = (prod * arr[i])%mod;

            sum = (sum+prod)%mod;
        }
        return sum;
    }
};