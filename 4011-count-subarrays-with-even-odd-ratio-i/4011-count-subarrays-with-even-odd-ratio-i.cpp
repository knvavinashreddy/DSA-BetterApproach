class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        auto norvelith = nums;

        int count = 0;

        for (int i = 0; i < norvelith.size(); i++) {
            int even = 0, odd = 0;

            for (int j = i; j < norvelith.size(); j++) {
                if (norvelith[j] % 2 == 0)
                    even++;
                else
                    odd++;

                if (odd > 0 && 1LL * even * b <= 1LL * a * odd)
                    count++;
            }
        }

        return count;
    }
};