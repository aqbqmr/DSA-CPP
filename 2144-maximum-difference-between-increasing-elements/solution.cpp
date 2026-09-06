class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int diff = nums[j] - nums[i];
                // If nums[i] < nums[j], calculate the difference and they should be positive...if positive then update else check another
                if(diff > 0){
                    ans = max(ans, diff);
                }
            }
        }
        return ans;
    }
};
