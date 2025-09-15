class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<char>temp;
        int space = 0;
        int cnt = 0;
        int n = text.length();
        for(int i = 0;i<n;i++)
        {
            if(text[i]!= ' ')
            {
                temp.push_back(text[i]);
            }
             if(text[i] == ' ' || i == n-1 )
            {
                if(i != n-1) space++;
                for(int j =0;j<temp.size();j++)
                {
                    if(find(brokenLetters.begin(),brokenLetters.end(),temp[j])!=brokenLetters.end())
                    {
                        cnt++;
                        temp.clear();
                        break;
                    }
                }
            }
        }
        return ((space+1)-cnt);
    }
};