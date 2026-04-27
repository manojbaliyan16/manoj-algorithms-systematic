
class Solution {
    bool helper(string &s, int l, int r, bool deleted)
    {
        while(l<r)
        {
            
            if((s[l])!=(s[r]))
            {
               if(deleted)
                {
                    return false; // already used once chance
                }
                return helper(s, l+1, r, true) || helper(s, l, r-1, true);     

                }
                l++;
                r--;
        }
        return true;
    }
public:
    
    bool validPalindrome(string s) {
     if(s.length()==0 || s.length()==1)
    {
        return true;
    }
    return helper(s, 0, s.length()-1, false);
    }
};