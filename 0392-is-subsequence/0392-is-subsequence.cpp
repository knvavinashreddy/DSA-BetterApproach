class Solution {
public:
    bool checkIs(string &a, string &b) {

        int i = 0;
        int j = 0;

        while (i < a.size() && j < b.size()) {

            if (a[i] == b[j]) {
                i++;
                j++;
            }
            else {
                j++;
            }
        }

        return i == a.size();
    }

    bool isSubsequence(string s, string t) {

        return checkIs(s, t);

    }
};