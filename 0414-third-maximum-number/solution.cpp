class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }
        vector<int> arr(st.begin(), st.end());
        int m = arr.size();
            if(m <= 2){
                return arr[m-1];
            }
        return arr[m-3];
    }
};
