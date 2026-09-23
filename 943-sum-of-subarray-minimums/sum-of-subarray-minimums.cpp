class Solution {
    public:
    vector<int>findNse(vector<int>arr,int n)
    {
        stack<int>st;
        vector<int>nse(n);
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
     public:
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
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int>nse(n);
        vector<int>pse(n);
        nse = findNse(arr,n);
        pse = findPse(arr,n);
        int mod = 1e9+7;
        long long sum = 0;
        for(int i = 0;i<n;i++)
        {
            long long left = i - pse[i];
            long long right = nse[i] - i;
            long long prod = (left*right)%mod;
            prod = (prod*arr[i])%mod;

            sum = (sum + prod)%mod;
        }
        return sum;
    }
};