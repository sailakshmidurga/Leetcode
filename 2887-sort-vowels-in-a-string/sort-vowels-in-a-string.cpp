class Solution {
    public:
    bool isVowel(char ch)
    {
        return (ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )?true:false;
    }
public:
    string sortVowels(string s) {
     int n = s.length();
     vector<char>vowels;
    for(char c:s)
    {
        if(isVowel(c))
        {
            vowels.push_back(c);
        }
    }
    sort(vowels.begin(),vowels.end());
    int i = 0;
    for(int j = 0;j<n;j++)
    {
        if(isVowel(s[j]))
        {
            s[j] = vowels[i++];
        }
    }
    return s;
    }
};