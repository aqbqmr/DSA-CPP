class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> ans;
        for(auto &x : nums){
            if(x < k){
                return -1;
            }
            else if(x > k){
                ans.insert(x);
            }
        }
        return ans.size();
    }
};
