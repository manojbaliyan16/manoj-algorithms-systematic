class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret="";
        for(int i=0;i<strs[0].size();++i)
        {
            char current=strs[0][i];
            for(int j=1;j<strs.size();++j)
            {
                if(i>=strs[j].size() || strs[j][i]!=current)
                {
                    return ret;
                }
            }
            ret+=current;
        }
        return ret;
    }
};