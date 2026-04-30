class Solution(object):
    def maxProfit(self, prices):
        to_buy = min(prices)
        i = prices.index(to_buy)

        l = len(prices)
        new_list = prices[i+1:l+1] 
        if not new_list:
            return 0
        else:
            to_sell = max(new_list)


         
        return (to_sell - to_buy )
