class Solution {
   int Partition(vector<int>& nums, int low, int high)
   {
    int i=low;
    int j=high;
    int pivot=nums[low];
    
    while(i<j)
    {
        // If Pivot is greter then the element move i i.e i++
        while((nums[i]<=pivot) && (i <=high-1))
        {
            i++;
        }
        // If Pivot is less then the element move j i.e j--
        while(nums[j]>pivot && j >=low+1)
        {
            j--;
        }
        if(i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[j], nums[low]);
    return j;
   }
   void quicksort(vector<int>& nums, int low, int high)
   {
     if(low < high)
        {
            int partitionIndex=Partition(nums, low, high);
            quicksort(nums, low, partitionIndex-1);
            quicksort(nums, partitionIndex+1, high);
        }
   }
public:
    
    vector<int> sortArray(vector<int>& nums) {
        // quick sort 
        int low=0;
        int high=nums.size()-1;
        quicksort(nums, low, high);
        return nums;
    }
};