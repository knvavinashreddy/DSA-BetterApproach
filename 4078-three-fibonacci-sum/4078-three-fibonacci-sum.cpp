class Solution {
public:
    
    bool threeFibonacciSum(int n) {
        
        int one = 0;
        int two = 1;
        while ((one + two)*2 <= n) {
            if ((one + two)*2 == n) {
                return true;
            }
            int x = one + two;
            one = two;
            two= x;
        }

        return false;
    }
};