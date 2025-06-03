class Solution {
public:
    string interpret(string command) {
        int n = command.length();
        string res;
        for(int i=0;i<n;i++)
        {
            if(command[i]=='G')
            {
                res.push_back('G');
            }
            else if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                   res.push_back('o');
                }
                else if(command[i+1]=='a')
                {
                    if(command[i+2]=='l' && command[i+3]==')')
                    {
                        res+="al";
                    }
                }
            }
        }
        return res;
    }
};