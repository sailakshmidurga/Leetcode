class Solution {
public:
    int myAtoi(string s) {
       int i = 0;
       int n = s.size();
       long long res = 0;
       while(i<n && s[i] == ' ') 
       {
         i++;
       }
       int sign = 1;
       if(i<n && s[i] == '+' || s[i] == '-')
       {
        if(s[i] == '-')
        {
            sign = -1;
        }
        i++;
       }
       while(i<n && isdigit(s[i]))
       {
        res = res * 10 + (s[i] - '0');
        i++;
        if(sign*res <= INT_MIN) return INT_MIN;
        if(sign*res >= INT_MAX) return INT_MAX;  
        }
        return res*sign;
    }
};