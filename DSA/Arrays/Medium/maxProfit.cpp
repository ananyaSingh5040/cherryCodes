//PARTIALLY RIGHT CODE:
// class Solution {
//     public:
//         int maxProfit(vector<int>& prices) {
    
//             if(prices.size()<=1)
//             return 0;
    
//             int min = INT_MAX;
//             int index=0;
//             for(int i=0;i<prices.size()-1;i++)
//             {
//                 if(min>prices[i])
//                 {
//                     min= prices[i];
//                     index= i;
//                 }
//             }
//             int maxi = INT_MIN;
//             for(int i=index;i<prices.size();i++)
//             {
//                 if(maxi<prices[i])
//                 {
//                     maxi= prices[i];
//                 }
//             }
//             int profit = maxi-prices[index];
//             if(profit<0) return 0;
//             return profit;
    
            
//         }
//     };