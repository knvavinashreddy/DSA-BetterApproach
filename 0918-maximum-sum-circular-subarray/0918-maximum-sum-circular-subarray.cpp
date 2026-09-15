class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentMax = 0, maxSum = nums[0];
        int currentMin = 0, minSum = nums[0];
        int total = 0;
        for(auto a : nums){
            total += a;
            currentMax = max(a,currentMax+a);
            maxSum = max(maxSum,currentMax);

            currentMin = min(a,currentMin+a);
            minSum = min(minSum,currentMin);
        }

        if(maxSum < 0) return maxSum;

        int wrapSum = total - minSum;

        return max(maxSum,wrapSum);
    }
};