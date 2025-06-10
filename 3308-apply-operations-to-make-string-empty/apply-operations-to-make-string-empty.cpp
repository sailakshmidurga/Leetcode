class Solution {
public:
    string lastNonEmptyString(string s) {
      int arr[26]={0};
for(int i=0;i<s.size();i++)
{
arr[int(s[i]-'a')]++;
}
int count=0;
for(int i=0;i<26;i++)
{
if(arr[i]>=count)
count=arr[i];
}
cout<<count;
string str="";
for(int i=s.size()-1;i>=0;i--)
{
if(arr[s[i]-'a']==count)
{
str=s[i]+str;
arr[s[i]-'a']--;
}
}
return str;
}
};