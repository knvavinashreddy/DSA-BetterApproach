class Solution {
public:
    long long countValidSubstrings(string s) {
        long long count = 0;
        int lastIndex = -1;
        for(int i=0;i<s.size();i++){
            if(i >= 2 && s.substr(i-2,3) == "abc"){
                lastIndex = i-2;
            }
            count += i-lastIndex;
        }
        return count;
    }
};