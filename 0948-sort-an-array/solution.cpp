// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         // // Selection Sort fails, because 
//         // // in this LeetCode problem, the array size can go up to $N = 50,000.
//         // // The time complexity of Selection Sort is O(N^2).If N = 50,000, the total operations will be approximately 50,000 * 50,000 = 2,500,000,000 (2.5 Billion)!.....

//         // int n = nums.size();
//         // for(int i = 0; i < n-1; i++){
//         //     int min = i;
//         //     for(int j = i+1; j < n; j++){
//         //         if(nums[j] < nums[min]){
//         //             min = j;
//         //         } 
//         //     }
//         //     swap(nums[i], nums[min]);
//         // }
//         // return nums;
//     }
// };




class Solution {
public:
    void merge(vector<int> & arr, int low, int mid, int high){
        vector<int> temp;
        int i = low; 
        int j = mid+1;
        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            } else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx = 0; idx < temp.size(); idx++){
            arr[idx + low] = temp[idx];
        }
    }
    void mergeSort(vector<int>  &arr, int left, int right){
        if(left < right){
            int mid = left + (right-left)/2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid+1, right);
            merge(arr, left, mid, right);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};
