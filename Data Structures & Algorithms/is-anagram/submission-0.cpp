class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> sarr(26,0);
        vector<int> tarr(26,0);
        for(int i=0;i<s.length();++i)
        {
            sarr[s[i]-'a']++;
        }
        for(int i=0;i<t.length();++i)
        {
            tarr[t[i]-'a']++;
        }
        return sarr==tarr;
        
    }
};
