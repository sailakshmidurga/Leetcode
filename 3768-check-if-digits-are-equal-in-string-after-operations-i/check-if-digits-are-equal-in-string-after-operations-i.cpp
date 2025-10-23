class Solution {
public:
    bool hasSameDigits(string s) {
        string s1;
        while(s.length()>2){
            
           s1 = "";
        for(int i = 0;i< s.length()-1;i++)
        {
           int  op = ((s[i]-'0')+(s[i+1]-'0'))%10;
            s1+=to_string(op);
        }
         s = s1;
        }
       return (s[0]==s[1]);
    }
};