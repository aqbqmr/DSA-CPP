class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        long long maxm = 0;
        long long sum = 0;
        unordered_map<int, int> freq;
        for(int i = 0; i < k; i++){
            sum += arr[i];
            freq[arr[i]]++;
        }
        if(freq.size() == k){
            maxm = sum;
        }
        int l = 0; 
        int r = k;
        while(r < n){
            sum -= arr[l];
            freq[arr[l]]--;

            if (freq[arr[l]] == 0) {
                freq.erase(arr[l]);
            }

            sum += arr[r];
            freq[arr[r]]++;
            l++; 
            r++;

            if(freq.size() == k){
                maxm = max(maxm, sum);
            }
        }
        return maxm;
    }
};



// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& arr, int k) {
//         int n = arr.size();
//         long long maxm = 0;
//         for(int i = 0; i <= n - k; i++){
//             unordered_set<int> st;
//             long long sum = 0;
//                 for(int j = i; j < i + k; j++){
//                 st.insert(arr[j]);
//                 sum += arr[j];
//             }
//             if(st.size() == k){
//             maxm = max(maxm, sum);
//             }
//         }   
//         return maxm;
//     }
// };
