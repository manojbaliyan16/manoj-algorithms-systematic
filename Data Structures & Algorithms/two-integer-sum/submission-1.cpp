class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            int need=target-nums[i];
            auto it=mymap.find(need);
            if(it!=mymap.end())
            {
                return {it->second,i};

            }
            else
            {
                mymap[nums[i]]=i;
            }
            
            
        }
        return {};
    }
};

