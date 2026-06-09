// Three integer sum means we have to find out a unique triplet whose sum is equivalent to 0 
// first we will solve iot by Brut force to solve it by brute force we can take for loop and a s tripet should be unique so we can store this list in a set 



#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

//1. Brute force 

vector<vector<int>> threesum(vector<int> &sum)
{
    set<vector<int>> unique_triplets;
    int n=sum.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;++j)
        {
            for(int k=j+1;k<n;++k)
            {
                if(sum[i]+sum[j]+sum[k]==0)
                {
                    vector<int> temp={sum[i],sum[j],sum[k]};
                    unique_triplets.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans{unique_triplets.begin(), unique_triplets.end()};
    return ans;

}

int main()
{
    vector<int> sum={-1,0,1,2,-1,-4};
    vector<vector<int>> result=threesum(sum);
    for(const auto &triplet:result)
    {
        for(int num:triplet)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}