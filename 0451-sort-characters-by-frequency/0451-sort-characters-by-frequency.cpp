class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        string res = "";
        for(auto a : s){
            m[a]++;
        }

        vector<pair<int,char>> p;
        for(auto a : m){
            p.push_back({a.second,a.first});
        }
        sort(p.begin(),p.end(),greater<pair<int,char>>());

        for(auto a : p){
            int val = a.first;
            while(val > 0){
                res+= a.second;
                val--;
            }
        }
        return res;

    }
};