// // Again Humbled with TLE.......
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();     
//         int maximum = INT_MIN;
//         for(int i = 0; i < n; i++){
//             int prefixSum = 0;
//             for(int j = i; j < n; j++){
//                 prefixSum += nums[j];
//                 maximum = max(maximum, prefixSum);
//             }
//         }
//         return maximum;
//     }
// };



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int prefixSum = 0;
        int maximum = INT_MIN;
        for(int i = 0; i < n; i++){
            prefixSum += nums[i];
            maximum = max(maximum, prefixSum);
            if(prefixSum < 0){ 
                prefixSum = 0;
            }
        }
        return maximum;
    }
};



