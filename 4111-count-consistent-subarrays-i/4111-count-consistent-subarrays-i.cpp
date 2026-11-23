class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int minVal = nums[i];
            int val = nums[i];
            for(int j=i;j<nums.size();j++){
                val = val & nums[j];
                minVal = min(minVal,nums[j]);
                if(minVal == val){
                    count++;
                }
            }
            
        }
        return count;
    }
};