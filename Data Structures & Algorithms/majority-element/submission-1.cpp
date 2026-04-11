class Solution {
public:
// Boyers Moore Voting Algorithm 
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        // Algo 
        /*
            1. At index = 0 
                count =0 
                candidate = new element 
            2. if next element is equal to the candate then count ++ 
                else count -- ; 
            3. if count ==0 condate updates to nums[i]
            4. for whose count > 0 that will be the majority element
        */
        if(n==0)
        {
            return 0;
        }
        int maj_element=0;
        int candidate=0;
        int count =0;
        for(int i=0;i<n;++i)
        {
             
            if(count==0)
            {
                candidate=nums[i];
                count =1;
            }
            else if(candidate==nums[i])
            {
                count++;
            }
            else 
            {
                count--;
                
            }
            
        }
        if(count > 0) maj_element=candidate;
        return maj_element;
    }
};