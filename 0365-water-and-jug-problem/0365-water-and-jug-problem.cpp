class Solution {
public:
    int findGcd(int a ,int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    bool canMeasureWater(int x, int y, int target) {
        
        if( x + y >= target){
            int gcd = findGcd(x,y);

            if(target % gcd == 0){
                return true;
            }
            else{
                return false;
            }
        }
        

        return 0;
    }
};