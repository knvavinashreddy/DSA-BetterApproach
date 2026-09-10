class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s;
        for(auto a : jewels){
            s.insert(a);
        }

        int count = 0;

        for(auto a : stones){
            if(s.count(a)){
                count++;
            }
        }
        return count;
    }
};