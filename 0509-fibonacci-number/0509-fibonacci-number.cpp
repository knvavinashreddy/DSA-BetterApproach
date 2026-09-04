class Solution {
public:
    int cal(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        return cal(n-1) + cal(n-2);
    }
    int fib(int n) {
        return cal(n);
    }
};