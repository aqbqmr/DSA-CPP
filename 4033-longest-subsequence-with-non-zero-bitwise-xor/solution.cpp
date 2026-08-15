class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int getXor = 0;
        bool vecZero = true;
        for(int &a : nums){
            getXor ^= a;
            if(a != 0){
                vecZero = false;
            }
        }
        if(vecZero){
            return 0;
        }
        return (getXor == 0) ? n-1 : n;
    }
};
