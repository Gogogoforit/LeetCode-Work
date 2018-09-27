class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for(int i=0;i<prices.size();i++) {
            int base = prices[i];
            for(int j=i+1;j<prices.size();j++) {
                if(prices[j]-base > max) {
                    max = prices[j]-base;
                }
            }
        }
        return max;
    }
};
