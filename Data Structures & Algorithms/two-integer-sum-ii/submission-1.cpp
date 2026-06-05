class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Ok it is given array as sorted 
        // so I take 2 pointer one is at low and another is at high

        int left=0;
        int right=numbers.size()-1;
        while(left < right) 
        {
            int sum=numbers[left] + numbers[right];
            if(sum == target)
            {
                return {left+1, right+1};

            }
            else if(sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
};
