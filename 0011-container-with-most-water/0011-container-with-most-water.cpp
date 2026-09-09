class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() -1;
        int area = INT_MIN;
        while(l < r){
            int minH = min(height[l],height[r]);
            int width = r-l;
            area = max(area,minH*width);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return area;

    }
};