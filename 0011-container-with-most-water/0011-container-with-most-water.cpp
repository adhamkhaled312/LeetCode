class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=INT_MIN;
        while(left < right){
            int temp=(right-left) * (min(height[left],height[right]));
            area=max(temp , area);
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;

    }
};