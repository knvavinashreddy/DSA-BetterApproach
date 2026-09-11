class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0;
        int maxVal = INT_MIN;

        for(int i=0;i<nums.size();i++){
            maxSum += nums[i];
            maxVal = max(maxVal,maxSum);
            if(maxSum < 0){
                maxSum = 0;
            }
        }
        return maxVal;
    }
};