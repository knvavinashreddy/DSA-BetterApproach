class Solution {
public:
    int minRotations(string s) {
        int pointingFirst = 0;
        int pointingLast = 9;

        int total = 0;
        for(int i=0;i<s.size();i++){
            int currentVal = s[i] - '0';
            int circularDiff =  abs(pointingFirst - currentVal);
            pointingFirst = currentVal;
            if(circularDiff > 5){
                 total +=  (9 - circularDiff) + 1;
            }
            else{
                total +=  circularDiff;
            }
            
        }
        return total;
    }
};