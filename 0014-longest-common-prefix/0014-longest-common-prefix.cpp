class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word = strs[0];

        for(int i=0;i<word.size();i++){
            string prefix = word.substr(0,i+1);
            for(int j=1;j<strs.size();j++){
                if(prefix != strs[j].substr(0,i+1)){
                    return word.substr(0,i);
                }
            }
        }
        return word;
    }
};