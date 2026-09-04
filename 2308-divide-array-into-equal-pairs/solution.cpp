class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
        for (auto x : mpp) {
                if(x.second % 2 != 0){
                    return false;
                }
            }
        return true;
    }
};
