class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.length();
        if(n<8)
        {
            return false;
        }
        int cntUpp =0;
        int cntLow = 0;
        int cntSpe = 0;
        int cntDig = 0;
        string specialCharacters = "!@#$%^&*()-+";
        for(int i =0;i<n;i++)
        {
            if(isupper(password[i]))
            {
                cntUpp++;
            }
            else if(islower(password[i]))
            {
                cntLow++;
            }
            else if(specialCharacters.find(password[i])!=string::npos)
            {
                cntSpe++;
            }
            else if(isdigit(password[i]))
            {
                cntDig++;
            }
            if(i>0 && password[i]== password [i-1])
            {
               return false;
            }
        }
        return (cntUpp>=1 && cntLow>=1 && cntSpe>=1 && cntDig >=1);
        
    }
};