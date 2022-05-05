class Solution {
    public: 
    int maxProfit(vector<int> prices) {
        if(prices.size()==1) return 0;
        int maxProfit=0,start=0,end=1;
        while(end<prices.size()){
            if(prices[start]<prices[end])
                maxProfit = max(maxProfit, prices[end]-prices[start]);
            else start=end;
            end++;
        }
        return maxProfit;
    }
};