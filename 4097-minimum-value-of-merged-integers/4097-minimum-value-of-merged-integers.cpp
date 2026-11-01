class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int maxEle = INT_MAX;

        vector<int> ans;

        int j = 0;
        
        for(int i=0;i<n-1;i+=2){
            string sum = to_string(nums[i]) + to_string(nums[i+1]);
            maxEle = min(maxEle,stoi(sum));
        }

        return maxEle;
    }
};