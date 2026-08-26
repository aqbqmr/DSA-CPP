class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int smaMull = k;
        while(true){
            bool found = false;
            for(auto num : nums){
                if(num == smaMull){
                    found = true;
                    break;
                }
            }
            if(!found){
                return smaMull;
            }
            smaMull += k;
        }
    }
};
