class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t n=nums.size();
        vector<int> ret;
        ret.reserve(2*n);
        for(int num:nums)
        {
            ret.push_back(num);
        }
        for(int num:nums)
        {
            ret.push_back(num);
        }
        return ret;
    }
};