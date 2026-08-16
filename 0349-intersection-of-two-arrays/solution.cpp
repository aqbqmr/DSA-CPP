class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        set<int> st;
        for(int i = 0;  i < a; i++){
            for(int j = 0; j < b; j++){
                if(nums1[i] == nums2[j]){
                    st.insert(nums1[i]);
                    break;
                }
            }
        }
        vector<int> ans;
        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
};
