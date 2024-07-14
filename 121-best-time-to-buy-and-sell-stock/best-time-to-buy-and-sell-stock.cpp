class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 , low = prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(low>prices[i])
            low = prices[i];
            profit = max(profit , prices[i] - low);
        }
        return profit;
    }
};