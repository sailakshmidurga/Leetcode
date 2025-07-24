class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res = "";
        for(string w:words)
        {
            int n = w.size();
            int i = 0;
            int j = n-1;
            while(i<j)
            {
                if(w[i]==w[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    break;
                }
            }
            if(i>=j)
            {
                res = w;
                break;
            }
        }
        return res;
    }
};