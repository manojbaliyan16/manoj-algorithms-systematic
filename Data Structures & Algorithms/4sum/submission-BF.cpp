#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> FourSum(vector<int> &nums)
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
            for(int k=j+1;k<n;++k)
            {
                for(int l=k+1;l<n;++l)
                {
                    //long long fourth=nums[i]+nums[j]+nums[k]+nums[l];
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==0)
                    {
                        vector<int> temp{nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }// TC =0(N^4) and SC=O(M) where M is the number of quadruplets in the array
        // this is worst we can't sumbit it any where because of time limit exceeded but this is brute force approach and we can optimize it by using two pointer approach and sorting the array first and then we can use two pointer approach to find the quadruplets in O(n^3) time complexity and O(1) space complexity
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}


int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> result = FourSum(nums);

    cout << "Quadruplets that sum to zero:" << endl;
    for (const auto& quadruplet : result) {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); ++i) {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}