class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        
        int closeNeeded = 0;
        int openNeeded = 0;
        
        for(auto a : s){
            if(a == '('){
                closeNeeded++;
            }
            else{
                if(closeNeeded > 0){
                    closeNeeded--;
                }
                else{
                    openNeeded++;
                }
            }
        }

        return openNeeded + closeNeeded;
    }
};