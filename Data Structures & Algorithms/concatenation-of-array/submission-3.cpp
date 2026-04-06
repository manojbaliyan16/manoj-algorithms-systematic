class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t n=nums.size();
        vector<int> ret(2*n);
       for(int i=0;i<n;++i)
       {
        ret[i]=nums[i];
        ret[i+n]=nums[i];
       }
        return ret;
    }
};