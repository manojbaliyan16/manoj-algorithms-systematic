class Solution {
public:
//optimal solution 
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Take a vector of vector of int we needs to return 
        vector<vector<int>> ans;
        // sort the given vector 
        sort(nums.begin(), nums.end());

        // we will take 3 pointer 
        /* i=0, j=i+1 and k=n-1 it will be initial position 

        */
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            // if i is not at 0th pos and nums[i]==nums[i+1] then we need to move further
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum < 0)
                {
                    j++;
                }
                else if(sum > 0)
                {
                    k--;
                
                }
                else
                {
                    vector<int> temp{nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j< k && nums[j]==nums[j-1]) j++;
                    while(j<<k && nums[k]==nums[k+1]) k--;

                }
            }
        }
        return ans;
    }
};

// Time Complexity. T(n)=O(nlogn) + O(n*n) --> O(nlog n ) due to sorting and O(n*n) it is due to while loop inside the for loop 
// space complexity is O(no of unique triplet)