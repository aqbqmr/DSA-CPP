class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int l = 0; 
        int r = k;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        int maxSum = sum;
        while(r < n){
            sum -= nums[l];
            l++;
            sum += nums[r];
            r++;
            maxSum = max(maxSum, sum);
        }
        return (double)maxSum / k;
    }
};
