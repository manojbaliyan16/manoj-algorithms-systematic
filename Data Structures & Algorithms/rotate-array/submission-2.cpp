class Solution {
    void reversePart(vector<int> &nums, int left, int right)
    {
        while(left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }

    }
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0 || n==1)
        {
            return ;
        }
        k %=n;
        reversePart(nums, 0, n-1);
        reversePart(nums, 0,k-1);
        reversePart(nums,k, n-1);

    }
};