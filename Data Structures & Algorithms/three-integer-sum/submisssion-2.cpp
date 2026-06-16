#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
// Submission one was giving TLE because its Time coomplexity is )(n^3) and space complexity was number of triplets 
// SO to reduced the complexity what is approach
/* 1. in the third we need to thing how we can get the third element in O(1) time 
2. thrird nuber will be equivalent to -(nums[i]+nums[j])
3. to avoid the repetition of the third number and another two we need to put the element between i and j 
into a set and if that third number is exist into set then only we can consider that as a part of triplet
*/
vector<vector<int>> threeSum(vector<int>& nums) {

    set<vector<int>> st;
    for(int i=0;i<nums.size();++i)
    {
        // this hasmap should be empty with each i index so will be initialized here 
        set<int> hashmap;
        for(int j=i+1;j<nums.size();++j)
        {
            // before moving to J put the element on index j into set
            int third=-(nums[i]+nums[j]);
            if(hashmap.find(third)!=hashmap.end())
            {
                vector<int> temp={nums[i],nums[j],third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashmap.insert(nums[j]);
        }
    }
    vector<vector<int>> ans{st.begin(),st.end()};
        return ans;
}

// Time complexity is O(n^2logM) because of sorting and space complexity is O(n) because of set and hashmap 
// where logM is for inserting the number of element into the hasmap and set and n is for the number of element in the array

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets that sum to zero:" << endl;
    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); ++i) {
            cout << triplet[i];
            if (i < triplet.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}