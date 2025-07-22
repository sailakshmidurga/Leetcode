class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(string w:operations)
        {
            if(w=="--X" || w=="X--")
            {
                res--;
            }
            else if(w=="X++" || w=="++X")
            {
                res++;
            }
        }
        return res;
    }
};