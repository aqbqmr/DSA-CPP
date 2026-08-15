class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int max = nums[n-1];
        vector<int> ans;
        for(int i = min; i < max; i++){
            bool find = false;
            for(int j = 0; j < n; j++){
                if(nums[j] == i){
                find = true;
                break;
            }
        }
        if(find == false){
            ans.push_back(i);
            }
        }
        return ans;
    }
};
