class Solution {
public:

    bool checkIsPrime(int num){
        if(num < 2) return false;

        for(int i=2;i*i<=num;i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {

        vector<int> ans;

        
        for(int i=0;i<nums.size();i++){
            if(checkIsPrime(nums[i])){
                ans.push_back(i);
            }
           
        }

        if(ans.size() <= 1){
            return 0;
        }
        return ans[ans.size()-1] - ans[0];
    }
};