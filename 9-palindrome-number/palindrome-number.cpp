class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int temp, rev=0;
        temp=x;
        while(temp!=0)
    {        
       int r=temp%10;
       rev=rev*10+r;
       temp=temp/10;
    }
    return rev==x;
}
};