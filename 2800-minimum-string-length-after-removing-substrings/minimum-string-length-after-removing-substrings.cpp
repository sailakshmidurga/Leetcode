class Solution {
public:
    int minLength(string s) {
        bool changed = true;;
        while(changed)
        {
            changed = false;
            size_t ab = s.find("AB");
            if(ab!=string::npos)
            {
                s.erase(ab,2);
                changed = true;
                continue;
            }
            size_t cd = s.find("CD");
            if(cd!=string::npos)
            {
                s.erase(cd,2);
                changed = true;
            }
        }
        return s.length();
    }
};