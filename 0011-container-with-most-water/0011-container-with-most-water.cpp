class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
        int area = INT_MIN;
        while(left < right){
            int length = min(height[left],height[right]);
            int width = right-left;
            area = max(length * width,area);
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