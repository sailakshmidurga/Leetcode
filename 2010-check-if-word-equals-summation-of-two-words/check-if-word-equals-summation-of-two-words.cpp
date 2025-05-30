class Solution {
    public:
    int wordToNumber(string s)
    {
        int num = 0; 
        for(char c:s)
        {
            num = num*10+(c-'a');
        }
        return num;
    }
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return(wordToNumber(firstWord)+wordToNumber(secondWord) == wordToNumber(targetWord));
    }
};