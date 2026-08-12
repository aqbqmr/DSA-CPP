class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n + 1))/2;
        int totSum = 0;
        for(int i = 0; i < n; i++){
            totSum += nums[i];
        }
        return sum - totSum;
    }
};
