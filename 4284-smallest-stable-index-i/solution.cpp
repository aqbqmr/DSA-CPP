class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k){
        int n = nums.size();
        for(int i = 0; i < n; i++){
            // int max = *max_element(nums.begin(), nums.begin()+i);   this is my test cases [5, 2, 8, 3] and k = 2 which is not accepted by this solution except all other leetcode test cases... so leetcode bless me with coin...
            int max = *max_element(nums.begin(), nums.begin()+i+1);
            int min = *min_element(nums.begin()+i, nums.end());
            if(max - min <= k){
                return i;
            }
        }
        return -1;
    }
};
