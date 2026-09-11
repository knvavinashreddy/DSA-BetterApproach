class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0,minSum = 0;
        int maxVal = INT_MIN,minVal = INT_MAX;

        for(int i=0;i<nums.size();i++){
            maxSum += nums[i];
            maxVal = max(maxVal,maxSum);
            if(maxSum < 0){
                maxSum = 0;
            }
            
            minSum += nums[i];
            minVal = min(minVal,minSum);
            if(minSum > 0){
                minSum = 0;
            }
        }

        return max(maxVal,abs(minVal));
    }
};