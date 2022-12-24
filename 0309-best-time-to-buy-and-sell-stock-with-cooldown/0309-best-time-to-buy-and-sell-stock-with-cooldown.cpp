class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buy /*buy[i]*/,buy_pre=INT_MIN;/*buy[i-1]*/
        int sell=0 /*sell[i]*/,sell_pre1=0 /*sell[i-1]*/,sell_pre2=0 /*sell[i-2]*/;

        for(int p :prices)
        {   //updating buy and sell values for current p
            buy=max(buy_pre,sell_pre2-p);
            sell=max(sell_pre1,buy_pre+p);
            //updating buy and sell values for next iteration
            buy_pre = buy;
            sell_pre2 = sell_pre1;
            sell_pre1 = sell;
        }
        return sell;
    }
};