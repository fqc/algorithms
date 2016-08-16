public class Solution {
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    public int maxProfit(int[] prices) {
        if (prices == null || prices.length == 0) {
            return 0;
        }
        int min = prices[0];
        int profit = 0;
        for (int price : prices) {
            if (price < min) {
                min = price;
            }
            profit = Math.max(profit, price - min);
        }

        return profit;
    }
}