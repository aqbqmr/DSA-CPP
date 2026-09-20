class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long maxm =INT_MIN;
        long minm = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxm){
                maxm = nums[i];
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < minm){
                minm = nums[i];
            }
        }
    return k * (maxm - minm);
    }
};
