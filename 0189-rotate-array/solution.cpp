class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        k%=n;   // this is bcz if someone told me to rotate this array by any position like 2,3,5,7,1000 anything but in range of integer then it keeps k as between 0 to n-1........

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
