/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ */

int maxProfit(vector<int>& prices) {
        // int ans = 0;                                                     //tc = O(n^2); sc = O(1)
        // for(int i=0; i<size(prices)-1; i++) {
        //     int x = *max_element(prices.begin()+i+1, prices.end());
        //     ans = max(ans, x-prices[i]);
        // }
        // return ans;

        int m = prices[0];                      //tc = O(n); sc = O(1)
        int ans = 0;
        for(int i=0; i<prices.size(); i++) {
            if(prices[i]<m) {
                m = prices[i];
            }else {
                ans = max(ans, prices[i]-m);
            }
        }
        return ans;
    }
