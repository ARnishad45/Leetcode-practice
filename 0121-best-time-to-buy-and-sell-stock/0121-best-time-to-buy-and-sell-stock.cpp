class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int n = prices.size();
        int minprice = INT_MAX;
        
        for(int i = 0; i < n; i++){
            minprice = min(minprice,prices[i]);
            maxPro = max(maxPro,prices[i] - minprice);
        }
        return maxPro;
    }
};