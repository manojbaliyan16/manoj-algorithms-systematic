class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> myset;
        for(int num:nums)
        {
            if(myset.find(num)==myset.end())
            {
                myset.insert(num);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};