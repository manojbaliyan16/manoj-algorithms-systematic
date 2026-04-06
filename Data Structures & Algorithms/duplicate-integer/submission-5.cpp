class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // set<int> myset; set is a not good idea to use hewre because it time complexity will be nloh n as it is made with RB tree 
        // so instead of this use unordered_set best case O(1) but in worst case O(n^2)
        // memory and time is still same if I am allowed to modify the input values, In that case I ll use the sorting method to sort the array 

        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n-1; ++i)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        
        return false;
    }
};