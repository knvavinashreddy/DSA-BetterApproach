class Solution {
public:
 vector<int> generateRow(int r){
        long long ans = 1;
        vector<int> row;
        row.push_back(ans);
        for(int i=1;i<r;i++){
            ans = ans * (r-i);
            ans = ans / i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};