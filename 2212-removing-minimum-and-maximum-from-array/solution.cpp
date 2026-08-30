class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minValue = nums[0];
        int maxValue = nums[0];
        int minIndex = 0;
        int maxIndex = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] < minValue){
                minValue = nums[i];
                minIndex = i;
            }
            if(nums[i] > maxValue){
                maxValue = nums[i];
                maxIndex = i;
            }
        }
        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);
        return min({left + 1 + n - right, right + 1, n - left});
    }
};
