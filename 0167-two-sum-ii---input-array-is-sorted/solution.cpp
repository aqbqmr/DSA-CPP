// I just got TLE bcz here i used O(n^2)...so for large size of array it will takes very huge time.....so that why i got humble TLE. 🥲
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int i = 0;
//         int n = numbers.size();
//         for(int i = 0; i < n; i++){
//             for(int j = i+1; j < n; j++){
//                 if(numbers[i] + numbers[j] == target){
//                     return {i+1, j+1};
//                 }
//             }
//         }
//         return {};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int sum = 0;
        while(left < right){
            sum = numbers[left] + numbers[right];
            if(sum < target){
                left++;
            }
            else if(sum > target){
                right--;
            }
            else{
                return {left+1, right+1};
            }
        }
        return {};
    }
};
