class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        
        for(int i=0;i<nums.size();++i)
        {
            int need=target-nums[i];
            if(mymap.find(need)!=mymap.end())
            {
                return {mymap[need], i};
            }  
            else
            {
                 mymap[nums[i]]=i;
            }
        }
        
       return {};;
    }
};
