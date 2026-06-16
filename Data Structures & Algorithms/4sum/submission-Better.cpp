#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// Better appraoch for 4-sum means instead of using 4 loop we will try to solve it in 3 loop 
// In addition to that let make it little more generic instead of ) fixed value lets say take it as Target and which 
// can pass using caller function and we can also make it more generic for k-sum problem as well
vector<vector<int>> FourSum(vector<int> &nums, int target)
{   
    if(nums.empty())
    {
        return {{}};
    }
    int n=nums.size();
    set<vector<int>> st;
    
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            set<long long> hashmap;
            for(int k=j+1;k<n;++k)
            {
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                long long remaining=target-sum;

                if(hashmap.find(remaining) != hashmap.end())
                {
                    vector<int> temp{nums[i], nums[j], nums[k], (int)remaining};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashmap.insert(nums[k]);
            }
                
        }
 
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

    int main()
    {
        vector<int> nums = {1, 0, -1, 0, -2, 2};
        int target = 0;
        vector<vector<int>> result = FourSum(nums, target);
        for (const auto &quad : result) {
            for (int num : quad) {
                cout << num << " ";
            }
            cout << endl;
        }
        return 0;
    }