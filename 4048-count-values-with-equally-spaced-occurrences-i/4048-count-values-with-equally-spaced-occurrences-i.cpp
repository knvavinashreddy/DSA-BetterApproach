class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> m;
        int count = 0;

        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        for(auto a :m){
            if(a.second.size() == 3 && a.second[1] - a.second[0] == a.second[2] - a.second[1]){
                count++;
            }
            
        }
        return count;
    }
};