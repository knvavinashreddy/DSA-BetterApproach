class Solution {
public:
    int calPoints(vector<string>& operations) {
         vector<int> ans;
        
        for(auto op : operations){
            if(op == "C"){
                ans.pop_back();
            }
            else if (op == "D"){
                ans.push_back(ans.back() * 2);
            }
            else if (op == "+"){
                ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
            }
            else{
                ans.push_back(stoi(op));
            }
        }
        
        int total = 0;
        
        for(auto a : ans){
            total += a;
        }
        
        return total;
    }
};