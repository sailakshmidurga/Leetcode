class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string,string>mpp = {
            {"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, {"Jun","06"},
         {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"}, {"Dec","12"},
        };
        stringstream ss(date);
        string day,month,year;
        ss>>day;
        ss>>month;
        ss>>year;
        string numstr;
        for(char c:day)
        {
            if(isdigit(c))
            {
                numstr+=c;
            }
        }
        if(numstr.size()==1) numstr = "0"+numstr;
        string res = year+"-"+mpp[month]+"-"+numstr;
        return res;
    }
};