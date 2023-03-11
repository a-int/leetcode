/* You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */

#include <iostream>
#include <vector>

int max_profit(std::vector<std::size_t>&);

int main(){
    std::vector<std::size_t> prices1 = {7,1,5,3,6,4};
    std::cout<<"For series: ";
    for (auto &i : prices1) std::cout<<i<<" ";
    std::cout<<" max profit equal: "<<max_profit(prices1);
    
    std::cout<<"\n\n";
    
    std::vector<std::size_t> prices2 = {6,5,4,3,2,1};
    std::cout<<"For series: ";
    for (auto &i : prices2) std::cout<<i<<" ";
    std::cout<<" max profit equal: "<<max_profit(prices2);
    return 0;
}

int max_profit(std::vector<std::size_t>& prices){
    std::size_t dayBuy = prices[0];
    int maxProfit = 0;
    for (size_t i = 1; i < prices.size(); i++)
    {
            std::size_t daySell = prices[i];
            int profit = daySell - dayBuy;
            if(profit <= 0) dayBuy = daySell;
            else{
                    if (profit > maxProfit) maxProfit = profit;
            }
    }
    return maxProfit;
}