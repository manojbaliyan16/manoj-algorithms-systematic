class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // set<int> myset; set is a not good idea to use hewre because it time complexity will be nloh n as it is made with RB tree 
        // so instead of this use unordered_set best case O(1) but in worst case O(n^2)
        unordered_set<int> myset;
        for(int num:nums)
        {
            if(myset.count(num))
                return true;
            else
            myset.insert(num);
            
        }
        
        return false;
    }
};