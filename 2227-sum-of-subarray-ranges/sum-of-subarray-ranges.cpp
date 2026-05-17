class Solution {
    public:
    vector<int> findNse(vector<int>& nums)
    {
        int n = nums.size();
        stack<int>st;
        vector<int>nse(n);
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && nums[st.top()] > nums[i])
            {
                st.pop();
            }
            nse[i] = st.empty()?n:st.top();
            st.push(i);
        }
        return nse;
    }
     public:
    vector<int> findPse(vector<int>& nums)
    {
        int n = nums.size();
        stack<int>st;
        vector<int>pse(n);
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && nums[st.top()] >= nums[i])
            {
                st.pop();
            }
            pse[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        return pse;
    }
     public:
    vector<int> findNge(vector<int>& nums)
    {
        int n = nums.size();
        stack<int>st;
        vector<int>nge(n);
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && nums[st.top()] < nums[i])
            {
                st.pop();
            }
            nge[i] = st.empty()?n:st.top();
            st.push(i);
        }
        return nge;
    }
     public:
    vector<int> findPge(vector<int>& nums)
    {
        int n = nums.size();
        stack<int>st;
        vector<int>pge(n);
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && nums[st.top()] <= nums[i])
            {
                st.pop();
            }
            pge[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        return pge;
    }
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        long long smaller = 0;
        long long greater = 0;
        
        vector<int>nse = findNse(nums);
        vector<int>nge = findNge(nums);
        vector<int>pse = findPse(nums);
        vector<int>pge = findPge(nums);
        for(int i = 0;i<n;i++)
        {
            long long left_nse = nse[i] - i;
            long long right_pse = i - pse[i];
            long long left_nge = nge[i] - i;
            long long right_pge = i - pge[i];
            smaller = 1LL * (smaller + (left_nse*right_pse*nums[i]));
            greater = 1LL * (greater + (left_nge*right_pge*nums[i]));
        }
        total = (greater - smaller);
        return total;
    }
};