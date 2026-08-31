// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             for(int j = i + 1; j < n; j++){
//                 if(nums[i]+nums[j] == target){
//                     return{i,j};
//                     break;
//                 }
//             }
//         }
//         return{};
//     }
// };

// Optimal Approach.................................................
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int>mpp;
        for(int i = 0; i < n; i++){
            int needed = target - nums[i];
            if(mpp.find(needed) != mpp.end()){
                return {mpp[needed], i};
            }
            mpp[nums[i]] = i;
        }
        return{};
    }
};
