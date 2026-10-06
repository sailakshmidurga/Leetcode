class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        for(int i = 0;i<num.length();i++)
        {
            while(!st.empty() && num[i] < st.top() && k>0)
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k>0)
        {
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string res = "";
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        while(res.length() > 0 && res.back() =='0')
        {
            res.pop_back();
        }
        if(res.length() == 0) return "0";
        reverse(res.begin(),res.end());
        return res;
    }
};