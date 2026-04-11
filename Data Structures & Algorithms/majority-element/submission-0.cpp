class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        unordered_map<int, int> mymap;
        //frequency map
        for(int i=0;i<n;++i)
        {
            mymap[nums[i]]++;
        }
        int maj_element=0;
        for(auto it=mymap.begin();it!=mymap.end();++it)
        {
            if(it->second>n/2)
            {
                maj_element= it->first;
            }
        }
        return maj_element;
    }
};