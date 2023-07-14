class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=0,profit=0,buy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            buy=min(buy,prices[i]);
            sell=prices[i]-buy;
            profit=max(profit,sell);
        }  
        return profit;      
    }
};
