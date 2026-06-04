class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Merge the two sorted array, 
        // Here my approach will be like to take advantage as array are sorted in non decreasing order 
        // Means the last element will be highest so lets start putting the element from last of array num2 to num1 last element
        // Here we need to compare the last element of both the array which ever is greater lets put that into num1 and move back the respective pointer
        // To solve this problem I  ll take 3 pointers 
        // pointer i It will point to the last valid non zero element of the array num1, 
        // Pointer j It will point to the last element of nums2 
        // Pointer K It will poiunt the last element of array num1
        // 
        int i=m-1;
        int j=n-1;
        int k=m+n-1;

        while(i >=0 && j>=0)
        {
            if(nums1[i] >=nums2[j])
            {
                nums1[k--]=nums1[i--];
            }
            else
            {
                nums1[k--]=nums2[j--];
            }

        }
        // If nums2 has remaining element
        while(j>=0)
        {
            nums1[k--]=nums2[j--];
        }
    }
};