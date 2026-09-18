// class Solution {
// public:
//     int maxScore(vector<int>& nums, int k) {
//         int lsum = 0;
//         int rsum = 0;
//         int maxSum = 0;
//         for(int i = 0; i <= k-1; i++){
//             lsum += nums[i];
//         }
//             maxSum = lsum;
//             int rIdx = nums.size()-1;
//             for(int i = k-1; i >= 0; i--){
//                 lsum -= nums[i];
//                 rsum += nums[rIdx];
//                 rIdx --;
//                 maxSum = max(maxSum, lsum + rsum);
//             }
//         return maxSum;
//     }
// };



class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum = 0;
        int rsum = 0;
        int maxSum = 0;
        int n = nums.size();
        for(int i = 0; i < k; i++){
            lsum += nums[i];
        }
        maxSum = lsum;
        int l = k - 1;
        int r = n - 1;
        while(l >= 0){
            lsum -= nums[l];
            rsum += nums[r];
            l--;
            r--;
            maxSum = max(maxSum, lsum+rsum);
        }
        return maxSum;
    }
};
