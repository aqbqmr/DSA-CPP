class Solution {
public:
    void sortColors(vector<int>& nums) {
        // return sort(nums.begin(), nums.end());   (We don't need to solve this with sorting, we need to solve it without sorting...)
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) cnt0++;
            else if(nums[i] == 1) cnt1++;
            else if(nums[i] == 2) cnt2++;
        }
        // for(int i = 0; i < cnt0; i++) nums[i] = 0;
        // for(int i = cnt0; i < cnt0 + cnt1; i++) nums[i] = 1;
        // for(int i = cnt0 + cnt1; i < cnt0 + cnt1 + cnt2; i++) nums[i] = 2;
        int idx = 0;
        for(int i = 0; i < cnt0; i++) nums[idx++] = 0;
        for(int i = 0; i < cnt1; i++) nums[idx++] = 1;
        for(int i = 0; i < cnt2; i++) nums[idx++] = 2;
    }
};


// // We can also solve this with the help of Merge Sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//     }
// };
