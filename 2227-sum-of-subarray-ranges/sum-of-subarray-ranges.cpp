class Solution {
public:
vector<int>findPge(vector<int>arr,int n)
{
    stack<int>st;
    vector<int>pge(n);
    for(int i = 0;i<n;i++)
    {
        while(!st.empty() && arr[st.top()] < arr[i])
        {
            st.pop();
        }
        pge[i] = st.empty()?-1:st.top();
        st.push(i);
    }
    return pge;
}
vector<int>findPse(vector<int>arr,int n)
{
    stack<int>st;
    vector<int>pse(n);
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
vector<int>findNge(vector<int>arr,int n)
{
    stack<int>st;
    vector<int>nge(n);
    for(int i = n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();       
        }
        nge[i] = st.empty()?n:st.top();
        st.push(i);
    }
    return nge;
}
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
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int>nge = findNge(nums,n);
        vector<int>pge = findPge(nums,n);
        vector<int>nse = findNse(nums,n);
        vector<int>pse = findPse(nums,n);

        long long sum = 0;
        for(int i = 0;i<n;i++)
        {
            long long left_nse = nse[i] -i;
            long long right_pse = i - pse[i];
            long long left_nge = nge[i] - i;
            long long right_pge = i - pge[i];

            long long smaller = left_nse*right_pse*nums[i];
            long long greater = left_nge*right_pge*nums[i];

            long long total = greater - smaller;

            sum += total;
        }
        return sum;
    }
};