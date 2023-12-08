class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1;j<n;j++){
                if(prices[i]<prices[j]){
                 int diff = prices[j]-prices[i];
                 if(profit<diff){
                     profit = diff;
                 }
                }
            }
        }
        return profit;
    }
};