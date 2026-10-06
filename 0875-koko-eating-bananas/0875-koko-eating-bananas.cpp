class Solution {
public:
    bool check(vector<int> piles ,int n,int mid,int limit){
        long long  total = 0;
        for(int i=0;i<n;i++){
            total += ceil((double)piles[i] / mid);
        }
        if(total <= limit){
            return true;
        }
        return false;
    } 

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int n = piles.size();
        int hi = *max_element(piles.begin(),piles.end());
        int ans = -1;
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            bool isPossible = check(piles,n,mid,h);
            if(isPossible){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return ans;
    }
};