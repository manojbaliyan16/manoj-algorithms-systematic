class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mymap;
       
        for(string st:strs)
        {
            string key=st;
            sort(key.begin(), key.end());
            mymap[key].push_back(st);
            
        }
        vector<vector<string>> ret;
        for(auto& pair:mymap)
        {
            ret.push_back(pair.second);
        }
        return ret;
    }
};
