class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        int buy = prices[0];
        int profit = 0;
        int n = prices.size();
        for (int i = 0; i < n; i++)
        {

            profit = prices[i] - buy > profit ? prices[i] - buy : profit;
            buy = prices[i] < buy ? prices[i] : buy;
        }
        return profit;
    }
};
