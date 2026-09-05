// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int max = 0;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if((nums[i]-1) * (nums[j]-1) >= max){
//                     max = (nums[i]-1) * (nums[j]-1);
//                 }
//             }
//         }
//         return max;
//     }
// };


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return ((nums[n-1]-1) * (nums[n-2]-1));
    }
};
