// Here Brute force is not Going to work we need to optimse it;....
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixMin(n);
        int minimum = INT_MAX;
        for(int i = n-1; i >= 0; i--){
            minimum = min(minimum, nums[i]);
            suffixMin[i] = minimum;
        }
        int maximum = INT_MIN;
        for(int i = 0; i < n; i++){
            maximum = max(maximum, nums[i]);

            if(maximum - suffixMin[i] <= k){
                return i;
            }
        }
        return -1;
    }
};



// // // This is The PrefixSum Method which is used to solve this problem........
// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> prefixMax(n);
//         vector<int> suffixMin(n);
//         prefixMax[0] = nums[0];
//         for (int i = 1; i < n; i++) {
//             prefixMax[i] = max(prefixMax[i - 1], nums[i]);
//         }
//         suffixMin[n - 1] = nums[n - 1];
//         for (int i = n - 2; i >= 0; i--) {
//             suffixMin[i] = min(suffixMin[i + 1], nums[i]);
//         }
//         for (int i = 0; i < n; i++) {
//             if (prefixMax[i] - suffixMin[i] <= k) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


