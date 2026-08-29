// // Sorting technique but in this question 'Leetcode' asking for without Sorting
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         return nums[n-k];
//     }
// };



class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto n : nums){
            pq.push(n);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};



// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {

//     }
// };
