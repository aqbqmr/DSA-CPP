class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                return i;
            }
            if(nums[i] > target){
                return i;
            }
        }
        return n;
    }
};


// at this moment i'm unable to solve this question in O(log n), cz currently i have not done binary search yet
