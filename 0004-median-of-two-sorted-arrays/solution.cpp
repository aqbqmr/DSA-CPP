class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n1; i++){
            ans.push_back(nums1[i]);
        }
        for(int i = 0; i < n2; i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        int m = ans.size();
        if(m % 2 != 0){
            return ans[m/2];
        }
        return (ans[m/2] + ans[m/2 - 1]) / 2.0;
    }
};
