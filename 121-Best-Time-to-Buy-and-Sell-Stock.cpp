class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Profit=0;
        int minCost=prices[0];
        for(int i=1;i<prices.size();i++){
            int currProfit=prices[i]-minCost;
            if(currProfit>Profit){
                Profit=currProfit;
            }
            if(prices[i]<minCost){
                minCost=prices[i];
            }
        }
        return Profit;
    }
}; 