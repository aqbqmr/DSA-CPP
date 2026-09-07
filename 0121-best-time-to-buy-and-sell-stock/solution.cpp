// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int profit = 0;
//         int maxm = INT_MIN;
//         int minm = INT_MAX;
//         for(int i = 0;i < n; i++){
//             minm = *min_element(prices.begin(), prices.begin()+i+1);
//             maxm = *max_element(prices.begin()+i, prices.end());
//             if(maxm - minm > 0){
//                 profit = max(maxm - minm, profit);
//             }
//         }
//     return profit;
//     }
// };


class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxm = INT_MIN;
    int profit = 0;
    vector<int> higestFromLastIndex(n);
    for(int i = n - 1; i >= 0; i--){
        maxm = max(maxm, prices[i]);
        higestFromLastIndex[i] = maxm;
    }
    int minm = INT_MAX;
    for(int i = 0; i < n; i++){
        minm = min(minm, prices[i]);
        int currentProfit = higestFromLastIndex[i] - minm;
        profit = max(currentProfit, profit);
    }
    if(profit > 0){
            return profit;
        }
    return 0;
    }
};
