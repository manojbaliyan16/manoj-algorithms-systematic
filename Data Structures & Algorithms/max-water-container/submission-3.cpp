class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        // two pointers
        int i=0;
        int j=n-1;
        // need to find out the area of the container for that we need to take the stick of smaller height
        int area=0;
        while(i<j)
        {
            area=max(area, min(heights[i], heights[j])*(j-i));
           // here is the main logic
            /*if(heights[i] < heights[j])
            {
               i++;
            }
            else
            {
                j--;
            }
            */
            heights[i] < heights[j] ? ++i :--j;
        }
        return area;
    }
};
